#include <stdlib.h>
#include <stdio.h>

typedef struct Node{
    int value;
    struct Node* next;
}Node;

Node* createNode (int);
void append (Node**, int);
void printList(Node*);
void freeList(Node**);
void removeValue(Node**, int);
void removeValueOpt(Node**, int);

int main (void)
{
    Node* head = createNode(0);
    printf("Before appending:\n");
    printList(head);
    
    for(int i=1; i < 5; i++){
        append(&head,10*i);
        append(&head, 20);
    }

    printf("\nAfter appending:\n");
    printList(head);

    printf("\nAfter removing:\n");
    removeValue(&head,20);
    printList(head);

    freeList(&head);
    return 0;
}

Node* createNode(int val){
    Node* newNode= malloc(sizeof(Node));
    newNode->value=val;
    newNode->next=NULL;
    return newNode;
}

void append(Node** headRef, int val){
    Node* atual = (*headRef);

    if(atual){
        while(atual->next != NULL){
            atual = atual->next;
        }   
        atual->next=createNode(val);
    }
    else{
        (*headRef)=createNode(val);
    }
}

void printList(Node* head)
{
    Node* atual;
    atual=head;

    while(atual!=NULL){
        printf("%d\n",atual->value);
        atual=atual->next;
    }
}

void freeList(Node** headRef){
    Node* atual = *headRef;
    Node* next;
    while(atual!=NULL)
    {
        next=atual->next;
        free(atual);
        atual=next;
    }
    *headRef=NULL;
}

void removeValue(Node** headRef, int value){
    Node* previous = NULL;
    Node* atual = (*headRef);
    while(atual!=NULL){
        if(atual->value==value){
            Node* temp = atual;
            atual=atual->next;
            if(previous!=NULL){
                previous->next=atual;
            }
            else{
                (*headRef)=atual;
            }
            free(temp);
        }else{
            previous=atual;
            atual=atual->next;
        }
    }
}

//Optimized version of the removeValue function
void removeValueOpt(Node** headRef,int value){
    Node* atual = *headRef;
    if(atual->value==value){
        *headRef=atual->next;
        free(atual);
    }
    else{
        headRef= &(atual->next);
    }
}