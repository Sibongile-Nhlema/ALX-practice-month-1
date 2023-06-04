#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints lowercase and uppercase letters +\n
 * @i: int 
 * 
 * Return: Always 0
 */

int main(void)
{
    int i = 0;
    for(i = 97; i <= 122; i++)
    {
        putchar(i);
    }
    for (i = 65; i <= 90; i++)
    {
        putchar(i);
    }
    putchar('\n');
    return (0);

}