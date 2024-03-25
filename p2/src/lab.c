/**Update this file with the starter code**/
# include "lab.h"


list_t *list_add(list_t *list, void *data)
{
    list_t l;

    return &l;
}

list_t *list_init(void (*destroy_data)(void *),
                                 int (*compare_to)(const void *, const void *))
{
    list_t l;

    return &l;
}

void list_destroy(list_t **list)
{
    return ;
}

void *list_remove_index(list_t *list, size_t index)
{
    return ;
}

int list_indexof(list_t *list, void *data)
{
    return 0;
}