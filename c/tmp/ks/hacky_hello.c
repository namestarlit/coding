#include <stdio.h>
#include <string.h>

int main(void)
{
    char hello[15];

    /* strcpy, copies a string to a hello array */
    strcpy(hello, "Hello, World!");
    printf("%s\n", hello);
    
    return (0);
}
