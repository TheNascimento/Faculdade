#include<stdio.h>


struct cadastro{
    char sobrenome[15];
    long int CPF, CEP;
    int idade;
};

void insereDados(struct cadastro* pessoa){
    printf("Qual eh seu sobrenome? ");
    scanf(" %s",&pessoa->sobrenome);
    printf("Qual eh seu CPF? ");
    scanf(" %li",&pessoa->CPF);
    printf("Qual eh seu CEP? ");
    scanf(" %li",&pessoa->CEP);
    printf("Qual eh sua idade? ");
    scanf(" %i",&pessoa->idade);
}

void mostraDados (struct cadastro pessoa){
    printf("\nSobrenome: %s",pessoa.sobrenome);
    printf("\nCPF: %li",pessoa.CPF);
    printf("\nCEP: %li",pessoa.CEP);
    printf("\nIdade: %i",pessoa.idade);
}

