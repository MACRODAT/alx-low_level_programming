#include "main.h"
#include <stdio.h>
#include "2-strchr.c"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'p');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}