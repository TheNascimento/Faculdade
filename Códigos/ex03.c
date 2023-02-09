#include<stdio.h>

void main(){
    float dep,tx,jur,totJuros=0;
    printf("Qual eh a o deposito inicial? ");
    scanf(" %f",&dep);
    printf("Qual eh a taxa de juros? (em %)");
    scanf(" %f",&tx);
    tx=tx/100;

    for(int i=0; i<24; i++){
        jur=dep*tx;
        totJuros+=jur;
        dep=dep+jur;
        printf("O ganho do mes %d eh: %.2f\n",i+1,jur);
    }

    printf("O valor da conta depois de 24 meses eh: %.2f\n",dep);
    printf("O valor do total de juros eh: %.2f", totJuros);
}

