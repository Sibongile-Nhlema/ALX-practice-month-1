#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet in lowercase + new line
 * @n: char 
 * Return: Always 0
 */

int main(void)
{
    char n = 97;

    for (n = 97; n < 123; n++)
    {
        putchar(n);
    }
    putchar('\n');
    return (0);
}