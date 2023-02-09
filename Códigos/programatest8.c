#include<stdio.h>


struct cadastro{
    char sobrenome[15];
    long int CPF, CEP;
    int idade;
};

typedef struct ficha{
    struct cadastro pessoa[5];
    int qtd;
} fichas;

void insereDadosFicha(fichas* relat, int num){

    if(num+relat->qtd>5){
        num=5-relat->qtd;
        printf("\nSoh eh possivel colocar %d pessoas\n", num);
    }
    int aux=relat->qtd;
    for(int i=aux; i<aux+num; i++){
        printf("\nPessoa %d\n",i);
        printf("Qual eh seu sobrenome? ");
        scanf(" %s",&relat->pessoa[i].sobrenome);
        printf("Qual eh seu CPF? ");
        scanf(" %li",&relat->pessoa[i].CPF);
        printf("Qual eh seu CEP? ");
        scanf(" %li",&relat->pessoa[i].CEP);
        printf("Qual eh sua idade? ");
        scanf(" %i",&relat->pessoa[i].idade);
        relat->qtd++;
    }
}

void mostraDadosFicha (fichas relat){
    for(int i=0; i < relat.qtd; i++){
        printf("\nPessoa %d",i);
        printf("\nSobrenome: %s",relat.pessoa[i].sobrenome);
        printf("\nCPF: %li",relat.pessoa[i].CPF);
        printf("\nCEP: %li",relat.pessoa[i].CEP);
        printf("\nIdade: %i",relat.pessoa[i].idade);
    }
}

void main(){
    fichas dez;
    dez.qtd=0;
    insereDadosFicha(&dez,2);
    mostraDadosFicha(dez);
    insereDadosFicha(&dez,6);
    mostraDadosFicha(dez);
}

