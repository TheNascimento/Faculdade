#include<stdlib.h>
#include<stdio.h>
typedef struct filha{
    int vet[10];
    int qtd;
} fila;

void enqueue(fila* f, int n){
    if(f->qtd == 10){
        printf("Cheio!\n");
    }
    else{
        f->vet[f->qtd]=n;
        f->qtd++;
    }
}

void dequeue(fila* f){
    if(f->qtd == 0){
        printf("Vazio!\n");
    }
    else{
        for(int i=0; i < f->qtd-1; i++){
            f->vet[i]=f->vet[i+1];
        }
        f->qtd--;
    }
}

void impF(fila* f){
    for(int i=0; i < f->qtd; i++){
        printf("%d ",f->vet[i]);
    }
    printf("\n");
}

void main(){
    //cria fila e inicializa a variavel de quantidade
    fila num;
    num.qtd = 0;
    fila* numeros = &num;
    //manipula
    enqueue(numeros,1);
    enqueue(numeros,2);
    enqueue(numeros,3);
    enqueue(numeros,4);
    enqueue(numeros,5);
    enqueue(numeros,6);
    impF(numeros);
    dequeue(numeros);
    dequeue(numeros);
    dequeue(numeros);
    dequeue(numeros);
    impF(numeros);
}

