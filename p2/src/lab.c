/**Update this file with the starter code**/
# include "lab.h"


list_t *list_add(list_t *list, void *data)
{
    // node_t* cur = list->head;
    // while(cur->next != list->head) {
    //     cur = cur->next;
    // }

    node_t * newNode = (node_t *)malloc(sizeof(node_t));
    node_t * first = list->head->next;
    newNode->data = data;
    newNode->next = first;
    newNode->prev = list->head;
    first->prev = newNode;
    list->head->next = newNode;
    list->size ++;
    return list;
}

list_t *list_init(void (*destroy_data)(void *),
                                 int (*compare_to)(const void *, const void *))
{
    list_t *lst = (list_t *)malloc(sizeof(list_t));
    lst->size = 0;
    lst->head = (node_t *)malloc(sizeof(node_t));
    lst->head->data = NULL;
    lst->head->prev = lst->head;
    lst->head->next = lst->head;
    lst->destroy_data = destroy_data;
    lst->compare_to = compare_to;
    return lst;
}

void list_destroy(list_t **list)
{
    node_t* cur = (*list)->head->next;
    while(cur != (*list)->head) {
        (*list)->head->next = cur->next;
        cur = NULL;
        free(cur);
        cur = (*list)->head->next;
    }
    (*list)->head = NULL;
    free((*list)->head);
    *list = NULL;
    free(*list);
    return ;
}

void *list_remove_index(list_t *list, size_t index)
{
    if(list->size == 0 || index > list->size) return NULL;

    node_t * remove = list->head->next;
    while(index--) {
        remove = remove->next;
    }
    void* re = remove->data;
    remove->next->prev = remove->prev;
    remove->prev->next = remove->next;
    free(remove);
    list->size --;
    return re;
}

int list_indexof(list_t *list, void *data)
{
    node_t* cur = list->head->next;
    int re = 0;
    while(cur->next != list->head) {
        if(*((int *)cur->data) == *((int *)data)) {
            return re;
        }
        re ++;
        cur = cur->next;
    }
    return -1;
}