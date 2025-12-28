#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int value;
    struct Node* next;
    struct Node* prev;
}Node;

Node* createNode (int); // cria um Node
void insertEnd (Node**,int); // vai até o fim da lista e cria um Node
void insertStart (Node**, int);// cria um Node no início e move a referência para ele
void removeValue(Node**, int);// procura Nodes com valores específicos e os remove
void printList(Node*);// mostra a lista de forma formatada, do início para o fim
void printListRev(Node*);// mostra a lista de forma formatada, de trás para frente

int main(void)
{
    Node* raiz = NULL; // cria a nossa lista, vazia;

    printf("--- Teste Visual ---\n");
    insertEnd(&raiz, 10); // adiciona um Node no fim da lista
    insertEnd(&raiz, 20); // adiciona um Node no fim da lista
    insertEnd(&raiz, 30); // adiciona um Node no fim da lista
    
    printList(raiz); // mostra os Nodes de raiz
    printListRev(raiz); // mostra os Nodes ao contrário

    printf("\n--- Teste Apos Inserir no Inicio ---\n");
    insertStart(&raiz, 5); // adiciona um Node no início
    printList(raiz); // mostra os Nodes de raiz
    printListRev(raiz); //mostra os Nodes ao contrário

    return 0;
}

Node* createNode(int value) //recebe um valor e retorna um Node com esse valor dentro
{
    Node* newNode = (Node*) malloc(sizeof(Node)); // cria um Node e aloca memória
    if(newNode==NULL) // se der erro na alocação, retorna NULL
        return NULL; // caso contrário, continua a função
    
    newNode->value = value; // o novo Node recebe o valor passado
    newNode->next = NULL; // o ponteiro de próximo aponta para nada
    newNode->prev = NULL; // o ponteiro de anterior aponta para nada

    return newNode; // devolve um Node pronto
}

void insertEnd(Node** headRef, int value) //recebe uma lista e um valor, insere o Node no fim da lista
{
    Node* newNode = createNode(value);  //cria o Node que será adicionado
    if(*headRef!=NULL) //Se a lista não estiver vazia, continua a função
    {
        while((*headRef)->next!=NULL) // enquanto não estiver no último Node com valor
            headRef=&((*headRef)->next); // muda a lanterna para o próximo Node

        newNode->prev = (*headRef); // quando chegar no fim, atualiza o novo Node para apontar para o anterior fim da lista
        (*headRef)->next = newNode; // atualiza o Node atual (fim da lista) para que aponte para o novo Node criado
    }
    else //se a lista estiver vazia
        *headRef = newNode; //faz com que o novo Node seja o início da lista
}

void insertStart(Node** headRef, int value) // recebe uma lista (no início) e um valor, adiciona um Node com o valor no início da lista
{
    Node* newNode = createNode(value); // cria o novo Node
    if(*headRef!=NULL) // se a lista não estiver vazia
    {
        newNode->next = (*headRef); // faz com que o novo Node aponte para o início anterior
        (*headRef)->prev = newNode; // faz com que o antigo início aponte para o novo Node
        *headRef = newNode; // Muda a referência de início para que agora seja o novo Node que foi adicionado
    }
    else
        *headRef = newNode; // se a lista estiver vazia, o novo Node é o novo início
}

void removeValue(Node** headRef, int value) //recebe uma lista (no início) e um valor, remove todos os Nodes com esse valor
{
    while(*headRef!=NULL)// enquanto não chegar no fim da lista
    {
        Node* aux = *headRef; // Node auxiliar para guardar o valor que será apagado;
        if(aux->value==value) // Se o valor do Node atual for igual ao desejado
        {
            *headRef=aux->next; // faz com que o endereço do ponteiro atual seja o próximo node após o que será apagado
            free(aux); // libera o endereço desejado
        }
        else // caso não seja o valor desejado
            headRef=&((*headRef)->next); // muda a referência ("lanterna") para o próximo Node
    }
}

void printList(Node* head){ // imprime uma lista
    printf("Lista Normal:  NULL");
    if(head!=NULL){ // se não for vazia, coloca o primeiro elemento
        printf("<-[%d]", head->value); // imprime esse Node
        head = head->next; // avança um
    }
    while(head!= NULL) // se tiver elementos, imprime eles (wow)
    {
        printf("<->[%d]", head->value); // imprime atual
        head = head->next; // avança um
    }
    printf("->NULL\n"); // coloca o último null
}

void printListRev(Node* head){ // imprime a lista ao contrário, fim->inicio
    if (head == NULL) { // se for vazia imprime um null e para a função
        printf("Lista Inversa: NULL\n");
        return;
    }
    while(head->next!=NULL){ // enquanto não chegar no fim
        head = head->next; //avance um Node
    }

    printf("Lista Inversa: NULL"); // início real da impressão
    if(head!=NULL){ // se existir um Node
        printf("<-[%d]", head->value); // imprime o primeiro
        head = head->prev; // avança um Node
    }
    while(head!= NULL) //enquanto não chegar no início
    {
        printf("<->[%d]", head->value); //imprime os Nodes
        head = head->prev; // avança (recua) um Node
    }
    printf("->NULL\n"); // imprime o último Node
}
