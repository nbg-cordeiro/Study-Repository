#include <stdlib.h>
#include <stdio.h>

typedef struct Node{
    int value;
    struct Node* next;
}Node;

Node* createNode (int);
void append(Node**, int);
void removeValue(Node**, int);
void printList(Node**);
void freeList(Node**);

int main (void)
{
    Node* head = createNode(0);
    printf("Before appending:\n");
    printList(&head);
    
    for(int i=1; i < 5; i++){
        append(&head,10*i);
        append(&head, 20);
    }

    printf("\nAfter appending:\n");
    printList(&head);

    removeValue(&head,20);
    printf("\nAfter removing:\n");
    printList(&head);

    freeList(&head);
    return 0;
}

Node* createNode(int value)
{
    Node* newNode = malloc(sizeof(Node));
    newNode->next=NULL;
    newNode->value=value;
    return newNode;
}

void append(Node** headRef, int value)
{
    while(*headRef != NULL)
        headRef = &((*headRef)->next);
    *headRef=createNode(value);
}

void removeValue(Node** headRef, int value)
{
    while(*headRef!=NULL){
        Node* saver = *headRef;

        if(saver->value==value)
        {
            *headRef=saver->next;
            free(saver);
        }else
            headRef=&(saver->next);
    }
}

void freeList(Node** headRef)
{
    while((*headRef)!=NULL)
    {
        Node* saver = (*headRef)->next;
        free(*headRef);
        *headRef = saver;
    }
}

void printList(Node** headRef)
{
    while((*headRef)!=NULL)
    {
        printf("%d\n",(*headRef)->value);
        headRef=&((*headRef)->next);
    }
}