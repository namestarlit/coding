#include <stdio.h>

int main(void)
{
    int test;

    printf("Enter a number between 1 - 4: ");
    scanf("%d", &test);

    switch(test)
    {
        case 1:
            puts("Hello");
            break;
        case 2:
            puts("Hi there!");
            break;
        case 3:
            puts("Mambo!");
            break;
        case 4:
            puts("Holla");
            break;
        default:
            puts("Fresh!");
            break;
    }
}