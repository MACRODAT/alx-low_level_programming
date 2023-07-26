#include "main.h"

/**
 * *_strcat - concats
 * @dest: input string
 * @src: input string
 * Return: str
**/
char *_strcat(char *dest, char *src)
{
    while (*dest)
        dest++;
    while(*src)
    {
        *dest = *src;
        src++;
        dest++;
    }
    return dest;
}
