#include <stdio.h>
#define MAXIM 10

typedef struct montinho{
    int pilha[MAXIM];
    int qtd;
}Pilha;

void popPil(Pilha* p){
    if(emptyPil(*p)){
        printf("\nEsta vazia!\n");
    }
    p->qtd--;
}

void pushPil(Pilha* p, int num){
    if(p->qtd >= MAXIM){
        printf("\nTa cheio!\n");
    }
    p->pilha[p->qtd]=num;
    p->qtd++;
}

void mostraPil(Pilha p){
    printf("\nPilha: ");
    for(int i=p.qtd-1; i>=0; i--){
        printf("\n%d",p.pilha[i]);
    }
}

int emptyPil(Pilha p){
    if(p.qtd==0){
        return 1;
    }
    return 0;
}

void main(){
    Pilha blastoise;
    blastoise.qtd=0;
    pushPil(&blastoise,2);
    pushPil(&blastoise,3);
    pushPil(&blastoise,5);
    pushPil(&blastoise,7);
    pushPil(&blastoise,8);
    pushPil(&blastoise,9);
    pushPil(&blastoise,7);
    pushPil(&blastoise,6);
    pushPil(&blastoise,4);
    pushPil(&blastoise,3);
    pushPil(&blastoise,7);
    mostraPil(blastoise);
    printf("\n");
    popPil(&blastoise);
    popPil(&blastoise);
    popPil(&blastoise);
    popPil(&blastoise);
    pushPil(&blastoise,1);
    mostraPil(blastoise);
    printf("\n");
    popPil(&blastoise);
    popPil(&blastoise);
    popPil(&blastoise);
    popPil(&blastoise);
    popPil(&blastoise);
    popPil(&blastoise);
    popPil(&blastoise);
    popPil(&blastoise);
    popPil(&blastoise);
    popPil(&blastoise);
    mostraPil(blastoise);
}

