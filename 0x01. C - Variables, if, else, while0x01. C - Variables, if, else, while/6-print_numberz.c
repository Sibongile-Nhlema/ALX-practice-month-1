#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digit number of base 10
 * @i: int 
 * 
 * Return: Always 0
 */

int main(void)
{
    int num;

    for (num = 0; num < 10; num++)
        putchar((num % 10) + '0');
        putchar('\n');
    return (0);
}