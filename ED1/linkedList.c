#include <stdlib.h>
#include <stdio.h>

typedef struct Node{ // struct que vamos usar de base para listas
    int value; // o valor que vamos guardar dentro de cada node
    struct Node* next; // isso aqui guarda o endereço do próximo node, está declarado como struct Node ao invés de Node pois o typedef ainda não foi finalizado
}Node; // typedef finalizado!

Node* createNode (int); // devolve um node com o valor armazenado
void append(Node**, int); // coloca um node no fim da lista
void removeValue(Node**, int); // remove todos os nodes com um valor específico
void printList(Node*); // imprime todos os valores de uma lista (vários nodes)
void freeList(Node**); // limpa a memória de uma lista, evitando memory leaks!

int main (void) // void colocado com o único intuito de mostrar que ele pode estar aí
{
    Node* head = createNode(0); //cria um node com valor 0 dentro dele
    printf("Before appending:\n");
    printList(head); // mostra essa "lista" de 1 node só
    
    for(int i=1; i < 5; i++){ // cria vários nodes e gruda eles no fim da lista
        append(&head,10*i); // valores crescentes
        append(&head, 20); // sempre 20 para testarmos a remoção
    }

    printf("\nAfter appending:\n");
    printList(head); // mostra a lista cheia

    removeValue(&head,20); // remove todos os nodes com 20 dentro
    printf("\nAfter removing:\n");
    printList(head); // mostra a lista sem nenhum 20

    freeList(&head); // libera a memória que foi salva pelo append e createNode
    return 0; // esse cara aqui é conhecido já
}

Node* createNode(int value)
{
    Node* newNode = malloc(sizeof(Node)); // cria um node com memória suficiente para um node ("Se fosse óbvio ninguém teria dúvida")
    if(newNode = NULL) // se der erro no malloc() ele retorna NULL, então daria erro nas próximas linhas, então esse if para a função
        return NULL; // isso é pra mostrar que deu erro!
    newNode->next=NULL; // começa com next vazio como padrão
    newNode->value=value; // insere o valor que foi passado na função dentro do Node;
    return newNode; // devolve um node construidinho caso nada tenha dado errado
}

void append(Node** headRef, int value)
{
    while(*headRef != NULL) // enquanto a lanterna não apontar pro fim (NULL) continue buscando
        headRef = &((*headRef)->next); // ande a lanterna para a frente até estar em cima de um NULL
    *headRef=createNode(value); // estando apontando para um ponteiro NULL, substitua esse NULL pelo novo conteúdo (novo Node)
}

void removeValue(Node** headRef, int value)// O ponteiro duplo funciona como uma lanterna que aponta para o ponteiro que vamos mexer
{
    while((*headRef)!=NULL) // enquanto estivermos observando algo!
    {
        Node* aux = (*headRef); // copiamos o conteúdo, só para saber qual seria o próximo node
        if(aux->value == value) // se o valor guardado for o que queremos
        {
            (*headRef) = aux->next; // alteramos o conteúdo de headRef, se alguém apontava pra ele, agora verá algo diferente! (andamos para a frente tbm)
            free(aux); //apagamos o que era pra apagar (por não estar desreferenciado (*), nós apagamos o endereço, e consequentemente o valor explodiu)
        }
        else{//já andamos antes, se executar isso aqui junto com o if, vamos dar 2 passos (paia)
            headRef = &((*headRef)->next); // se não achamos nada, mudamos a "lanterna" para olhar outro ponteiro
        //  headRef=&(saver->next); <- isso aqui faria a mesma coisa!
        }
    }
}

void freeList(Node** headRef)
{
    while((*headRef)!=NULL) // enquanto a lanterna não apontar pro fim
    {
        Node* saver = (*headRef)->next; // guarda o próximo node, já que essa informação vai ser deletada quando liberarmos o headRef
        free(*headRef); // libera o endereço!
        *headRef = saver; // passa pro próximo node, que foi salvo lá em cima!
    }
}

void printList(Node* head) //poderia ser feito com ponteiro duplo, mas isso é lowkey desnecessário
{
    while((head)!=NULL) //enquanto não chegar no fim
    {
        printf("%d\n",head->value); //imprime o valor
        head=head->next; //passa pro próximo
    }
}