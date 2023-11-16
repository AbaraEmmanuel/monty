#include "monty.h"

/**
 * custom_swap - swaps the value of the top two elements in the stack
 * @custom_stack: pointer that points to the stack
 * @line_num: line number of the instruction
 * Return: void, exit with -1 on failure
 **/
void custom_swap(stack_t **custom_stack, unsigned int line_num)
{
    int temp;

    if (len(custom_stack) < 2)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_num);
        exit(EXIT_FAILURE);
    }

    temp = (*custom_stack)->n;
    (*custom_stack)->n = (*custom_stack)->next->n;
    (*custom_stack)->next->n = temp;
}
