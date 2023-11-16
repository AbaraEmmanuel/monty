#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SEPARATOR "\n\t\r "

typedef struct node_s
{
    int value;
    struct node_s *prev;
    struct node_s *next;
} node_t;

typedef struct operation_s
{
    char *operation_code;
    void (*function)(node_t **stack, unsigned int line_number);
} operation_t;

extern operation_t custom_operations[];
unsigned int custom_length(node_t **stack);
void custom_free_stack(node_t *stack);
void custom_nop(node_t **stack, unsigned int line_number);
void custom_pop(node_t **stack, unsigned int line_number);
void custom_push(node_t **stack, char *value, unsigned int line_number);
void custom_pall(node_t **stack, unsigned int line_number);
void custom_pint(node_t **stack, unsigned int line_number);
int custom_find_operation(node_t **stack, char *operation_code, int line_number);
void custom_swap(node_t **stack, unsigned int line_number);
size_t custom_list_length(node_t *head);
#endif
