#include <stdlib.h>

typedef struct TreeNode{
    int value;
    struct TreeNode* left;
    struct TreeNode* right;
}TreeNode;

TreeNode* createTreeNode(int valor)
{
    TreeNode* newNode = (TreeNode*) malloc(sizeof(TreeNode));
    if(newNode==NULL)
        return NULL;
    newNode->value=valor;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
TreeNode* inserir(TreeNode* raiz, int valor) {
    if (raiz == NULL) {
       raiz=createTreeNode(valor);
       return raiz;
    }
    if(valor < raiz->value){
        raiz->left = inserir(raiz->left, valor);
        return raiz;
    }
    if(valor >= raiz->value){
        raiz->right = inserir(raiz->right, valor);
        return raiz;
    }
}

void imprimir(TreeNode* raiz)
{
    if(raiz==NULL)
        return;
    imprimir(raiz->left);
    printf("%d ", raiz->value);
    imprimir(raiz->right);
}

int find (TreeNode* raiz, int valor){
    if(raiz==NULL){
        return 0;
    }
    if(raiz->value==valor){
        return 1;
    }
    if(valor< raiz->value)
        return find(raiz->left, valor);
    if(valor>= raiz->value)
        return find(raiz->right, valor);
}