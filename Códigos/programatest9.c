#include<stdio.h>


typedef struct cadastro{
    char sobrenome[15];
    long int CPF, CEP;
    int idade;
    struct cadastro* prox;
} estrutura;

typedef struct cadastro* cad;

void insereDadosFicha(cad* relat){

    estrutura* no =(estrutura*) malloc(sizeof(estrutura));
    no->prox = *relat;
    *relat = no;
    printf("Qual eh seu sobrenome? ");
    scanf(" %s",&no->sobrenome);
    printf("Qual eh seu CPF? ");
    scanf(" %li",&no->CPF);
    printf("Qual eh seu CEP? ");
    scanf(" %li",&no->CEP);
    printf("Qual eh sua idade? ");
    scanf(" %i",&no->idade);
}



void mostraDadosFicha (cad* relat){
    cad aux;
    aux = *relat;
    int i=1;
    while(aux != NULL){
        printf("\nPessoa %d",i);
        printf("\nSobrenome: %s",aux->sobrenome);
        printf("\nCPF: %li",aux->CPF);
        printf("\nCEP: %li",aux->CEP);
        printf("\nIdade: %i",aux->idade);
        i++;
        aux = aux->prox;
    }
}


void main(){
    cad* dez;
    dez = malloc(sizeof(cad));
    *dez = NULL;
    insereDadosFicha(dez);
    mostraDadosFicha(dez);
    insereDadosFicha(dez);
    mostraDadosFicha(dez);
}

