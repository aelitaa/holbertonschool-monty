void delete_stack_node(void)
{
    stack_t *tmp;

    tmp = arguments->head;
    arguments->head = arguments->head->next;
    free(tmp);
}

