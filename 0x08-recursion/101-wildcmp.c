#include "main.h"
#include <stdio.h>

/**
  * _wildcmp_recursion - Compare equality of strings.
  * @s1 string to be compared string
  *@s2 string to be compared
  *
  * Return: 1 identical or 0 not identical.
  */
#include <stdio.h>

int wildcmp(char *s1, char *s2);

int wildcmp(char *s1, char *s2) 
{
    if (*s1 == '\0' && *s2 == '\0') 
    {
        return 1;
    }
    if (*s2 == '*') 
    {
        if (*(s2 + 1) != '\0' && *s1 == '\0') 
	{
            return 0;
        }
        if (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2))) 
	{
            return 1;
        }
    }
    if (*s1 == *s2) 
    {
        return wildcmp(s1 + 1, s2 + 1);
    }
    return 0;
}

int main() {
    char str1[] = "hello";
    char str2[] = "h*o";
    if (wildcmp(str1, str2)) 
    {
	    return 1;
    } else 
    {
	    return 0;
    }
    return 0;
}


