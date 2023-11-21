#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to the pointer of the head of the linked list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *current = *h, *next;
    size_t count = 0;

    while (current != NULL)
    {
        count++;
        next = current->next;
        free(current);

        if (current <= next)
        {
            *h = NULL;
            return count;
        }
    *h = NULL;
    return count;
}
int main(void)
{
    listint_t *head;
    listint_t *head2;
    listint_t *node;

    head2 = NULL;
    add_nodeint(&head2, 0);
    add_nodeint(&head2, 1);
    add_nodeint(&head2, 2);
    add_nodeint(&head2, 3);
    add_nodeint(&head2, 4);
    add_nodeint(&head2, 98);
    add_nodeint(&head2, 402);
    add_nodeint(&head2, 1024);

    listint_t *current = head2;
    while (current != NULL)
    {
        printf("[%p] %d\n", (void *)current, current->n);
        current = current->next;
    }

    size_t freed_size_1 = free_listint_safe(&head2);
    printf("Freed size of list 1: %zu\n", freed_size_1);
    printf("Head of list 1: %p\n", (void *)head2);

    head = NULL;
    node = add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    node->next = add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);

    /* Print the linked list using putchar */
    current = head;
    while (current != NULL)
    {
        printf("[%p] %d\n", (void *)current, current->n);
        current = current->next;
    }
    size_t freed_size_2 = free_listint_safe(&head);
    printf("Freed size of list 2: %zu\n", freed_size_2);
    printf("Head of list 2: %p\n", (void *)head);
    return (0);
}

