#include <stdio.h>

/**
 * main - CL arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
    printf("%d\n", argc);

    while(argc--)
        printf("%s ", *argv++);
    putchar('\n');

    return (0);
}
