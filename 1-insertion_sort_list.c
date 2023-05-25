#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order using Insertion Sort.
 * @list: Pointer to the head of the list.
 */
void insertion_sort_list(listint_t **list) {
    
    listint_t *current, *sorted, *temp;
    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    current = *list;
    sorted = NULL;

    while (current != NULL) {
        temp = current->next;

        while (sorted != NULL && sorted->n > current->n) {
            if (current->prev != NULL)
                current->prev->next = current->next;
            if (current->next != NULL)
                current->next->prev = current->prev;

            current->next = sorted;
            current->prev = sorted->prev;
            if (sorted->prev != NULL)
                sorted->prev->next = current;
            sorted->prev = current;

            if (current->prev == NULL)
                *list = current;

            print_list(*list);
            sorted = current->prev;
        }

        if (sorted == NULL) {
            current->prev = NULL;
            current->next = *list;
            if (*list != NULL)
                (*list)->prev = current;
            *list = current;
        }

        sorted = current;
        current = temp;
    }
}
