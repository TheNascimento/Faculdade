/*
 *  Exercícios 02/04/2020
 *
 *  • 1) Faça um programa (não precisa ser uma TAD) que receba um vetor de 10 elementos por um usuário. O programa deve ter:
 *  • A) Uma função que ordene de forma crescente os valores do vetor.
 *  • B) Uma função que ordene de forma decrescente os valores do vetor.
 *  • C) Uma função que insira um valor inteiro, em uma posição especificada pela função. O valor sobrescreve o outro.
 *   
 *  • Todas as funções devem usar passagem por referência e não por valor. Ou seja, devem ser usados ponteiros.
 *
 *  @author Tiago Nascimento
 *  @date 06/04/2020
*/

#include <stdio.h>

#define CAPACIDADE 10

void ordernarCrescente(int* vetor);
void ordernarDecrescente(int* vetor);
void inserirNumero(int* vetor, int posicao, int valor);
void mostrarVetor(int* vetor);

int main(){
    // Passagem de referência de um vetor, pega sempre o endereço do primeiro elemento do mesmo.
    int vetor[CAPACIDADE];
    
    printf("\t\t\t --- Manipulação com vetores ---\n\n");
    for (int contador = 0; contador < CAPACIDADE; contador++) {
        printf("Digite o valor %d do vetor: ", contador + 1);
        scanf("%d", &vetor[contador]);
    }
    
    inserirNumero(vetor, 2, 30);
    printf("\n\nVetor ordenado crescente:\n\n");
    ordernarCrescente(vetor);
    mostrarVetor(vetor);
    
    printf("-------------------------------------------------------\n");
    
    printf("\n\nVetor ordenado decrescente:\n\n");
    ordernarDecrescente(vetor); 
    mostrarVetor(vetor);
    
    return 0;
}

// posição e valor não foram passados por referência pois não há necessidade.
void inserirNumero(int* vetor, int posicao, int valor) {
    vetor[posicao] = valor;    
}

// Passagem por referência do vetor em todas as funções.
void ordernarCrescente(int* vetor) {
    int auxiliar;
    for(int contador1 = 0; contador1 < CAPACIDADE; contador1++){
        for(int contador2 = contador1; contador2 < CAPACIDADE; contador2++){
            if(vetor[contador1] > vetor[contador2]){
                auxiliar = vetor[contador1];
                vetor[contador1] = vetor[contador2];
                vetor[contador2] = auxiliar;
            }
        }
    }        
}

void ordernarDecrescente(int* vetor) {
    int auxiliar;
    for(int contador1 = 0; contador1 < CAPACIDADE; contador1++){
        for(int contador2 = contador1; contador2 < CAPACIDADE; contador2++){
            if(vetor[contador1] < vetor[contador2]){
                auxiliar = vetor[contador1];
                vetor[contador1] = vetor[contador2];
                vetor[contador2] = auxiliar;
            }
        }
    }
}    

// Função adicional para mostrar os vetores.
void mostrarVetor(int* vetor) {
    for (int contador = 0; contador < CAPACIDADE; contador++){
            printf("%d\n", vetor[contador]);
    }        
}
