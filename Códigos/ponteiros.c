/* O exerc�cio � calcular o cubo de um per�metro
passando por uma fun��o, por refer�ncia*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


float cuboPorValor(float per){
    return pow(per,3);
}

void cuboPorRef(float *per, float *c){
    *c=pow(*per,3);
}

void cuboValorRef(float per, float *c){
    *c=per*per*per;
}

void main(){
    float p, cub, vr;
    float *ptr;
    ptr=&p;
    printf("Digite o valor do perimetro: ");
    scanf(" %f",&p);
    printf("O valor do cubo eh: %.2f", cuboPorValor(p));
    printf("\n");
    cuboPorRef(ptr,&cub);
    cuboValorRef(p,&vr);
    printf("O valor de cub eh: %.2f",cub);
    printf("\nO valor de vr eh: %.2f",vr);
}


