#include "monty.h"

/**
 * custom_main - driver function for custom program
 * @argc: int num of arguments
 * @argv: opcode file
 * Return: 0
 */
int custom_main(int argc, char **argv)
{
    stack_t *custom_stack;

    custom_stack = NULL;
    if (argc != 2)
    {
        fprintf(stderr, "USAGE: custom_program file\n");
        exit(EXIT_FAILURE);
    }

    custom_read_file(argv[1], &custom_stack);
    /* remember to free memory */
    custom_free_dlistint(custom_stack);
    return (0);
}
