#include<stdio.h>

void main(){
    float kwh;
    char tipo;
    printf("Qual eh a quantidade consumida? (Em kWh) ");
    scanf(" %f",&kwh);
    printf("Qual eh o tipo de intala��o? (R para Residencias, I para industrias e C para comercios) ");
    scanf(" %c",&tipo);

    switch(tipo){
    case 'R':
        if(kwh<=500){
            kwh=kwh*0.4;
        } else {
            kwh=kwh*0.65;
        }
        break;
    case 'C':
        if(kwh<=1000){
            kwh*=0.55;
        } else {
            kwh*=0.60;
        }
        break;
    case 'I':
        if(kwh<=5000){ kwh=kwh*0.55; } else { kwh=kwh*0.60; }
        break;
    }

    printf("O valor da conta eh: %.2f",kwh);
}

