#include <stdlib.h>
#include <stdio.h>

typedef struct numero{
    int dado;
    struct numero* prox;
} num; //para se referenciar a uma estrutura, usaremos num;

typedef num* lista; // lista ser� um ponteiro para a estrutura

void insereI(lista* list, int a){
    num* no = (num*) malloc(sizeof(num));
    no->dado = a;
    no->prox = *list;
    *list = no;
}

void insereF(lista* list, int a){
    num* no = (num*) malloc(sizeof(num));
    no->dado = a;
    no->prox = NULL;
    if(*list == NULL){
        *list = no;
    }else{
        num *aux=*list;
        while(aux->prox != NULL){
            aux=aux->prox;
        }
        aux->prox = no;
    }
}

int RemoveI(lista* list){
    if(*list == NULL){
        return 0;
    }
    num* aux;
    aux = *list;
    *list = aux->prox;
    free(aux);
    return 1;
}

int RemoveF(lista* list){
    if(*list == NULL){
        return 0;
    }
    num *ant, *aux;
    aux = *list;
    while(aux->prox != NULL){
        ant=aux;
        aux=aux->prox;
    }
    ant->prox = NULL;
    free(aux);
    return 1;
}

int RemoveN(lista* list, int a){
    if(*list == NULL){
        return 0;
    }
    num *ant, *aux;
    aux = *list;
    while(aux->dado != a && aux->prox != NULL){
        ant=aux;
        aux=aux->prox;
    }
    if(aux->dado == a){
        ant->prox = aux->prox;
        free(aux);
        return 1;
    }
    return 0;
}

int printa(lista* list){
    num *aux;
    aux = *list;
    while(aux!=NULL){
        printf("%d ->", aux->dado);
        aux = aux->prox;
    }
    printf("NULL");
}

void main(){
    lista* li;
    li = malloc(sizeof(lista));
    *li = NULL;
    insereI(li, 4);
    insereI(li, 5);
    insereI(li, 6);
    insereF(li, 3);
    printa(li);
    RemoveI(li);
    RemoveF(li);
    printf("\n");
    printa(li);
    insereI(li, 1);
    insereI(li, 2);
    insereI(li, 6);
    insereF(li, 3);
    printf("\n");
    printa(li);
    RemoveN(li, 1);
    printf("\n");
    printa(li);
}

