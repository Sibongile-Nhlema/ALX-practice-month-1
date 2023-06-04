#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints lowercase letters except q and e
 * @i: int
 *  
 * Return: Always 0
 */

int main(void)
{
    int i = 0;
    for (i = 97; i <= 122 && i !=113 && i != 101; i++)
    {
        putchar(i);
    }
    putchar('\n');
}