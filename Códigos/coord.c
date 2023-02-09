#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "coord.h"

//Estrutura feita
struct coordenadas{
    float x,y,z;
};

coord* criarPontos (float x, float y, float z){
    coord* p = (coord*) malloc(sizeof(coord));
    if (p != NULL){
        p->x = x;
        p->y = y;
        p->z = z;
    }
    return p;
}

void liberaM (coord* p){
    free(p);
}

void atribui (coord* p, float x, float y, float z){
    p->x = x;
    p->y = y;
    p->z = z;
}

void acessaCoord (coord* p, float* a, float* b, float* c){
    *a = p->x;
    *b = p->y;
    *c = p->z;
}

void acessaX (coord* p, float* v){
    *v = p->x;
}

void acessaY (coord* p, float* v){
    *v = p->y;
}

void acessaZ (coord* p, float* v){
    *v = p->z;
}

float calcDist (coord* p, coord* q){
    return sqrt(pow(p->x - q->x,2)+pow(p->y - q->y,2)+pow(p->z - q->z,2));
}

void mostraCoord (coord* p){
    printf("\nCoordenadas:\nX: %.2f\nY: %.2f\nZ: %.2f", p->x, p->y, p->z);
}
