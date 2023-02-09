#include <stdio.h>
#include <locale.h>

float sacar (float saldo);
float deposito (float saldo);

void main(){
    setlocale(LC_ALL,"");
    float saldo = 1000;
    int opcao;

    while(opcao!=4){
        printf("\n(1) Consultar saldo\n(2) Saque\n(3) Dep�sito\n(4) Sair");
        printf("\nDigite a sua op��o: ");
        scanf("%d",&opcao);
        switch (opcao){
        case 1:
            printf("\nSaldo Atual: %f\n\n",saldo);
            break;
        case 2:
            saldo = sacar(saldo);
            break;
        case 3:
            saldo = deposito(saldo);
            break;
        }
    }
}

float sacar (float saldo){
    float valor;
    printf("Valor do saque: ");
    scanf("%f",&valor);
    saldo = saldo - valor;
    printf("\nSaldo Atual: %f\n\n",saldo);
    return saldo;
}

float deposito (float saldo){
    float valor;
    printf("Valor do dep�sito: ");
    scanf("%f",&valor);
    saldo = saldo + valor;
    printf("\nSaldo Atual: %f\n\n",saldo);
    return saldo;
}

