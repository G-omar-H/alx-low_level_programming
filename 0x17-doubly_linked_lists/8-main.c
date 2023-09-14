#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    int n;

    head = NULL;
    print_dlistint(head);
    printf("-----------------\n");
    n = delete_dnodeint_at_index(&head, 5);
    print_dlistint(head);
    printf("%d", n);
printf("-----------------\n");
    n = delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("%d", n);
printf("-----------------\n");
    n = delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("%d", n);
printf("-----------------\n");
    n = delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("%d", n);
printf("-----------------\n");
    n = delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("%d", n);
printf("-----------------\n");
    n = delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("%d", n);
printf("-----------------\n");
    n = delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("%d", n);
printf("-----------------\n");
    n = delete_dnodeint_at_index(&head, 0);
    printf("%d", n);
printf("-----------------\n");
    n = delete_dnodeint_at_index(&head, 0);
    printf("%d", n);
printf("-----------------\n");
    n = delete_dnodeint_at_index(&head, 0);
    printf("%d", n);
printf("-----------------\n");
    n = delete_dnodeint_at_index(&head, 0);
    printf("%d", n);
printf("-----------------\n");
    n = delete_dnodeint_at_index(&head, 0);
    printf("%d", n);
printf("-----------------\n");
    n = delete_dnodeint_at_index(&head, 0);
    printf("%d", n);
    printf("-----------------\n");
    n = delete_dnodeint_at_index(&head, 0);
    printf("%d", n);
    printf("-----------------\n");
    n = delete_dnodeint_at_index(&head, 0);
    printf("%d", n);
    printf("-----------------\n");
    n = delete_dnodeint_at_index(&head, 0);
    printf("%d", n);
    printf("-----------------\n");
    n = delete_dnodeint_at_index(&head, 0);
    printf("%d", n);
    return (0);
}
