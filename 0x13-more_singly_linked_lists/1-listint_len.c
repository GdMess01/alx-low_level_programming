#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints all the elements of a listint_t list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */


size_t listint_len(const listint_t *h)
{
        size_t s = 0;

        while (h)
        {
                h = h->next;
                s++;
        }
        return (s);
}
