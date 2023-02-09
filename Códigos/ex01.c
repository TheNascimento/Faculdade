#include<stdio.h>

void main(){
    float slr;
    printf("Qual eh o seu salario? ");
    scanf("%f",&slr);
    if(slr > 1250){
        slr=slr*1.1;
    }
    else{
        slr=slr*1.15;
    }
    printf("O novo salario eh: %.2f",slr);
}

