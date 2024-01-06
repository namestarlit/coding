#include <stdio.h>

/**
* main - prints a triangle
* 
* Return: 0 (success)
*/

int main(void)
{
    int i, k;

    for (i = 0; i < 11; i++)
    {
        for (k = i; k >= 0; k--)
            printf("%d ", k);

        putchar('\n');
    }

    return (0);
}