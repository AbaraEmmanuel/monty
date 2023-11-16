#include "monty.h"

/**
 * custom_pop - removes the last inserted element
 * @custom_stack: pointer to the pointer to the head
 * @line_num: number of lines in the file
 * Return: nothing
 */
void custom_pop(stack_t **custom_stack, unsigned int line_num)
{
    stack_t *to_the_end;

    if (custom_stack == NULL)
    {
        printf("L%u: can't pop an empty stack\n", line_num);
        exit(EXIT_FAILURE);
    }
    else if (*custom_stack == NULL)
    {
        printf("L%u: can't pop an empty stack\n", line_num);
        exit(EXIT_FAILURE);
    }
    else
    {
        to_the_end = *custom_stack;
        *custom_stack = (*custom_stack)->next;
        free(to_the_end);
    }
    return;
}
