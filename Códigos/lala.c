#include <stdio.h>
#define max 10

typedef struct lista{
    int vet[max];
    int qtd;
} li;

int emptyF(li f){
    if(f.qtd == 0){
        return 1;
    }
    return 0;
}

void enqueue(li* f, int n){
    if(f->qtd == max){
        printf("Cheia!\n");
    }
    else{
        f->vet[f->qtd]=n;
        f->qtd++;
    }
}

void dequeue(li* f){
    if(emptyF(*f)){
        printf("Vazia!\n");
    }
    else{
        for(int i=0; i<f->qtd; i++){
            f->vet[i]=f->vet[i+1];
        }
        f->qtd--;
    }
}

void main(){
    li num;
    li* n = &num;
    num.qtd=0;

    enqueue(n,1);
    enqueue(n,2);
    enqueue(n,3);
    enqueue(n,4);
    enqueue(n,5);

    for(int i=0; i<num.qtd; i++){
        printf("%d ",num.vet[i]);
    }
    printf("\n");

    dequeue(n);

    for(int i=0; i<num.qtd; i++){
        printf("%d ",num.vet[i]);
    }
    printf("\n");

    enqueue(n,1);

    for(int i=0; i<num.qtd; i++){
        printf("%d ",num.vet[i]);
    }
    printf("\n");
}

