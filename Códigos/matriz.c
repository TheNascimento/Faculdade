#include <stdlib.h>/* malloc, free, exit */
#include <stdio.h>/* printf */
#include "matriz.h"

struct matriz {
    int lin;
    int col;
    float* v;
};

void libera (Matriz* mat){
    free(mat->v);
    free(mat);
}

Matriz* cria (int m, int n) {
    Matriz* mat = (Matriz*) malloc(sizeof(Matriz));
    if(mat == NULL) {
        printf("Mem�ria insuficiente!\n");
        exit(1);
    }
    mat->lin = m;
    mat->col = n;
    mat->v = (float*) malloc(m*n*sizeof(float));
    return mat;
}

float acessa (Matriz* mat, int i, int j) {
    int k; /* �ndice do elemento no vetor */
    if(i<0 ||i>=mat->lin||j<0 ||j>=mat->col) {
        printf("Acesso inv�lido!\n");
        exit(1);
    }
    k = i*mat->col+ j; //armazenamento por linha
    return mat->v[k];
}

int linhas (Matriz* mat) {
return mat->lin;
}

void atribui (Matriz* mat, int i, int j, float v) {
    int k; /* �ndice do elemento no vetor */
    if(i<0 || i>=mat->lin || j<0 || j>=mat->col) {
        printf("Atribui��o inv�lida!\n");
        exit(1);
    }
    k = i*mat->col + j;
    mat->v[k] = v;
}
int colunas (Matriz* mat) {
    return mat->col;
}

