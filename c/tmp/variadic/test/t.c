#include <stdio.h>
#include <stdlib.h>

/**                                 
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string
 * @len: length of the string     
 * @next: points to the next node
 *                              
 * Description: singly linked list node structure
 * for your project                                                        
 */
typedef struct list_s
{
        char *str;
        unsigned int len;
        struct list_s *next;
} list_t;

int main(void)
{
        list_t *node = NULL;
        node = malloc(sizeof(list_t));

        node->len = 3;

        node->str = malloc(sizeof(char) * node->len);
        node->str[0] = 'H';
        node->str[1] = 'i';
        node->str[2] = '\0';

        node->next = NULL;

        free(node);

        return (0);
}
