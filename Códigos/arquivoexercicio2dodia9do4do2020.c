#include <stdlib.h>
#include <stdio.h>

typedef struct numero{
    int dado;
    struct numero* prox;
} num; //para se referenciar a uma estrutura, usaremos num;

typedef num* lista; // lista será um ponteiro para a estrutura

void func1(lista* list, int a){
    num* no = (num*) malloc(sizeof(num));
    no->dado = a;
    no->prox = *list;
    *list = no;
}

void func2(lista* list, int a){
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

int func3(lista* list){
    if(*list == NULL){
        return 0;
    }
    num* aux;
    aux = *list;
    *list = aux->prox;
    free(aux);
    return 1;
}

int func4(lista* list){
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

int func5(lista* list, int a){
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

int func6(lista* list){
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
    func1(li, 4);
    func1(li, 5);
    func1(li, 6);
    func2(li, 7);
    func6(li);
    func3(li);
    func4(li);
    printf("\n");
    func6(li);
    func1(li, 1);
    func1(li, 2);
    func1(li, 3);
    printf("\n");
    func6(li);
    func5(li, 1);
    printf("\n");
    func6(li);
}
