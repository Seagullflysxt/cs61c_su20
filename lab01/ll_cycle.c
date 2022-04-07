#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here 
    no cycle, return 0, otherwise return 1*/
    if (head == NULL) {
        return 0;
    }

    node *tortoise = head;
    node *hare = head;

    while (1) {
    hare = hare -> next;   
    if (hare == NULL) {
        return 0;
    }
    hare = hare -> next;
    if (hare == NULL) {
        return 0;
    }

    tortoise = tortoise -> next;
    if (tortoise == NULL) {
        return 0;
    }
    if (hare == tortoise) {
        return 1;
        }
    }
    return 0;
}