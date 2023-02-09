#include <stdio.h>
#include <stdlib.h>

typedef struct TNo{
    int valor;
    struct TNo *esq, *dir;
}No;

typedef struct TArvore{
    No *raiz;
}Arvore;

void CriaArvore(Arvore *A){
    A->raiz = NULL;
}

No *Inserir(No *raiz, int valor){
    if(raiz == NULL){
        raiz = (No *) malloc(sizeof(No));
        if(raiz != NULL){
            raiz->valor = valor;
            raiz->esq = NULL;
            raiz->dir = NULL;
        }else{
            printf("\nErro de alocacao de memoria!");
        }
    }else{
        if(valor < raiz->valor){
            raiz->esq = Inserir(raiz->esq, valor);
        }else{
            raiz->dir = Inserir(raiz->dir, valor);
        }
    }
    return raiz;
}


void inOrder(No *Raiz){
    if(Raiz != NULL){
        inOrder(Raiz->dir);
        printf("\n%d", Raiz->valor);
        inOrder(Raiz->esq);
    }
}

void preOrder(No* a){
    if(a != NULL){
        printf("\n%d", a->valor);
        preOrder(a->esq);
        preOrder(a->dir);
    }
}

void postOrder(No *a){
    if(a != NULL){
        postOrder(a->esq);
        postOrder(a->dir);
        printf("\n%d", a->valor);
    }
}

No *Busca(int chave, No *Raiz){
    No *pno;
    if(Raiz == NULL){
        pno = NULL;
    }else if(chave == Raiz->valor){
        pno = Raiz;
    }else if(chave < Raiz->valor){
        pno = Busca(chave, Raiz->esq);
    }else{
        pno = Busca(chave, Raiz->dir);
    }
    return pno;
}


void main(void){
    Arvore A1;
    int numero;
    No* nbusca;

    CriaArvore(&A1);

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while(numero > 0){
        A1.raiz = Inserir(A1.raiz, numero);
        printf("Digite um numero: ");
        scanf("%d", &numero);
    }

    inOrder(A1.raiz);
    printf("\n");
    preOrder(A1.raiz);
    printf("\n");
    postOrder(A1.raiz);

    printf("\nDigite um numero para pesquisa: ");
    scanf("%d", &numero);
    nbusca = Busca(numero, A1.raiz);

    if(nbusca == NULL){
        printf("\nValor nao encontrado!");
    }else{
        printf("\nValor encontrado no endereco %p", nbusca);
        printf("\nO valor no endereco %p eh %d", nbusca, nbusca->valor);
    }


    printf("\n\nDigite um valor para ser removido: ");
    scanf("%d", &numero);
    // Primeiro busca o elemento
    nbusca = Busca(numero, A1.raiz);

    if(nbusca == NULL){
        printf("\nValor nao encontrado!");
    }else{ // Se encontrou, remove!
        A1.raiz = Remover(numero, A1.raiz);
        inOrder(A1.raiz); // Imprime mais uma vez para mostrar que removeu o nó com a chave inserida.
    }

    printf("\n");
    preOrder(A1.raiz);
    printf("\n");
    postOrder(A1.raiz);


}

