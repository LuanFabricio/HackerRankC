#include <stdio.h>
#include <stdlib.h>

typedef struct lk
{
    int data;
    struct lk* next;
} linkedList;


void printLinkedList(linkedList* head){
    linkedList* list = head;
    while (list != NULL)
    {
        printf("%i\n", list->data);
        list = list->next;
    }
}

int main(){
    linkedList* list = malloc(sizeof(linkedList));
    list->data = 0;
    list->next = malloc(sizeof(linkedList));
    list->next->data = 2;

    printLinkedList(list);
}