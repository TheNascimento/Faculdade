#ifndef FILACIRCULAR_H_INCLUDED
#define FILACIRCULAR_H_INCLUDED

typedef struct character{
    char p[10];
} pers;

typedef struct filaCircular{
    pers nome[5];
    int primeiro;
    int ultimo;
    int total;
}fila;

//cria fila
fila* filaCirc (){
    fila* jogos = (fila*) malloc(sizeof(fila));;
    jogos->primeiro=0;
    jogos->ultimo=0;
    jogos->total=0;
    return jogos;
}

//manipula fila
void enqueue(fila* f, pers n){
    if(f->total == 5){
        printf("Cheio!\n\n");
    }
    else{
        f->nome[f->ultimo] = n;
        f->total++;
        f->ultimo = (f->ultimo+1)%5;
    }
}

int emptyF(fila f){
    if(f.total == 0){
        return 1;
    }
    else{
        return 0;
    }
}

void dequeue(fila* f){
    if(emptyF(*f)){
        printf("Vazio!\n\n");
    }
    else{
        f->primeiro=(f->primeiro +1) %5;
        f->total--;
    }
}

int sizeF(fila* f){
    return f->total;
}

pers frontF (fila* f){
    return f->nome[f->primeiro];
}

//funcoes para impressao
void imprimirP(pers pe){
    for(int i=0; pe.p[i] != '\0'; i++){
        printf("%c",pe.p[i]);
    }
    printf("\n");
}

void imprimirF(fila* f){
    int j=f->primeiro;
    printf("\n");
    for(int i=0; i < f->total; i++){
        imprimirP(f->nome[j]);
        j=(j+1)%5;
    }
    printf("\n");
}

#endif // FILACIRCULAR_H_INCLUDED

