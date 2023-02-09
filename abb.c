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
        inOrder(Raiz->esq);
        printf("\n%d", Raiz->valor);
        inOrder(Raiz->dir);
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

No *Remover(int chave, No *Raiz){
    if(Raiz != NULL){
        if(chave < Raiz->valor){
            Raiz->esq = Remover(chave, Raiz->esq);
        }else if (chave > Raiz->valor){
            Raiz->dir = Remover(chave, Raiz->dir);
        }else{
            if(Raiz->esq == NULL && Raiz->dir == NULL){ //� uma folha?
                free(Raiz);
                Raiz = NULL;
            }else if(Raiz->esq == NULL){    //a esquerda � nula? Se for, a direita existe
                No *ntemp = Raiz;           //cria um n� temor�rio pra receber o end do n�
                Raiz = Raiz->dir;           //repassa a raiz da direita para a raiz da arvore
                free(ntemp);                //libera o n� a ser removido
            }else if(Raiz->dir == NULL){    // o mesmo do anterior s� que com a direita
                No *ntemp = Raiz;
                Raiz = Raiz->esq;
                free(ntemp);
            }else{                          //os dois n�o s�o nulos
                No *Maior = Raiz->esq;      //n� temporario de apoio para encontrar o n� de maior chave
                while(Maior->dir != NULL){  //busca at� que encontre o n� onde a direita � nula
                    Maior = Maior->dir;
                }
                Raiz->valor = Maior->valor; //o valor do n� maior vai para a raiz
                Maior->valor = chave;       //o valor da chave � recebido pelo n� maior
                Raiz->esq = Remover(chave, Raiz->esq);  //remove o n� que acabou de ser substituido
            }
        }
    }
    return Raiz;
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

