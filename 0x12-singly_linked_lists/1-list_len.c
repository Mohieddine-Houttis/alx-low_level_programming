#include <stdlib.h>
#include "lists.h"


/**
 * list_len - returns the nmbr an  elements in a linked list
 * @a: pointer to the list_t list
 *
 * Return: nmbr of elements in a

*/
size_t list_len(const list_t *a)
{
    size_t n = 0;

    while (h)
 { 
 n++;
 a = a->next;
 }
    return (n);
}

