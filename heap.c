#include <stdio.h>

//index deve ser passado de 0 a n
void maxheapfy(int *vet, int index, int tam){
    int dir = (index)*2 + 2; //indice da direita
    int esq = (index)*2 + 1; //indice da esquerda
    int maior = index;
    //� maior que o filho da esquerda?
    if(esq <= tam && *(vet+index) < *(vet+esq)){
        maior=esq; //se for, maior vira esq
    }
    if(dir <= tam && *(vet+maior) < *(vet+dir)){ //verifico se o filho da direita � maior.
        maior=dir;
    }
    if(maior != index){ //eu verifico se o �ndice � diferente da vari�vel maior
        int temp;
        temp = *(vet+maior);
        *(vet+maior)=*(vet+index); //filho esta recebendo o valor menor do pai
        *(vet+index)=temp;        //pai esta recebendo o valor maior do filho
        maxheapfy(vet,maior,tam); //rechamo a fun��o com a nova posi��o
    }
}

void buildmaxheap(int *vet, int tam){
    int lastdadnode = ((tam+1)/2)-1;
    for(int i=lastdadnode; i>=0; i--){
        maxheapfy(vet,i,tam);
    }
}

void main(){
    int vetor[]={16, 4, 10, 14, 7, 9, 3, 2, 8, 1};
    int vetor2[]={15,2,60,35,90,41,20,50,110,22,15,200,99,67,92,34,160,101};
    int *p = vetor;
    int *q = vetor2;
    maxheapfy(p,1,9);
    for(int i=0; i<10; i++){
        if(i==9){
            printf("%d",vetor[i]);
        } else{
            printf("%d - ",vetor[i]);
        }
    }

    printf("\n");
    printf("\n");
    buildmaxheap(q,17);
    for(int i=0; i<18; i++){
        if(i==17){
            printf("%d",vetor2[i]);
        } else{
            printf("%d - ",vetor2[i]);
        }
    }
}

