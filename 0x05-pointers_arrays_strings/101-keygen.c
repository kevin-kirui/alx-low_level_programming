#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define PASSWORD_LENGTH 10

int main(void) {
    srand(time(0)); 

    char password[PASSWORD_LENGTH + 1]; 
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;

    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }
    password[PASSWORD_LENGTH] = '\0'; 

    printf("Generated Password: %s\n", password);

    return 0;
}
