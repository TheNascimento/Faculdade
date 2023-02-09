#include <stdlib.h>
#include <stdio.h>
#include <string.h> //uma biblioteca de manipula��o de strings

//estrutura que pode conter mais de um tipo de vari�vel
//declarar um vetor "tipodevariavel nomedovetor [numero de elementos]"
//estrutura tem um nome
typedef struct data{
    int dia;
    int mes;
    int ano;
} Dat;

//typedef struct data Dat;

struct aluno{
    int matricula;
    char nome[30];//vetor de caracteres com 30 posi��es (0 a 29)
    Dat nascimento;
};

void main(){
    struct aluno registro; //criei uma estrutura do tipo aluno, com o nome registro
    registro.matricula = 123;
    strcpy(registro.nome,"Douglas Henrique");
    registro.nascimento.dia = 5;
    registro.nascimento.mes = 5;
    registro.nascimento.ano = 1991;

    printf("Nome do aluno: %s\nMatricula: %d\nData de nascimento: %d-%d-%d",registro.nome,registro.matricula,registro.nascimento.dia,registro.nascimento.mes,registro.nascimento.ano);
}

