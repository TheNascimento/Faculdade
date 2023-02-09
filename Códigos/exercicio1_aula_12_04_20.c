/*
 *
 * Exercícios 09/04/2020
 * 1) Faça um programa (não precisa ser uma TAD) que tenha uma estrutura com um vetor de 50 elementos e uma variável para a quantidade de elementos na
 * lista. O programa deve ter:
 * a) Uma função de ordenação (crescente ou decrescente, tanto faz).
 * b) Uma função para eliminar repetitividade dentro do vetor.
 * c) Uma função que insira dados na lista. Essa função deve ter o número de valores a serem inseridos.
 * Ex: Quero inserir apenas 4 números na minha lista, então o número de valores inseridos será passado como parâmetro na função.
 * • Lembrem-se de usar passagem por referência quando for trabalhar com os dados de dentro da lista. Pode ser usado passagem por valor sem
 * problemas.
 *
 * @author Tiago Nascimento
 * @date 12/04/2020
 */
 
#include <stdio.h>

#define CAPACIDADE 50

void ordenarCrescente(int* vetor);
void eliminarRepetitividade(int* vetor);
void inserirValores(int* vetor, int numeroDeValores);

int quantidadeValores = 0;
int main() {
    int vetor[CAPACIDADE] = {0};

    printf("\t\t\t --- Exercício de Lista Estática ---\n\n");
    
    printf("\nVetor ordenado de forma crescente:\n\n");
    // inserirValores(vetor, 2);
    
    return 0;
}

void ordenarCrescente(int* vetor) {
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

void eliminarRepetitividade(int* vetor) {
    
}

/*void inserirValores(int* vetor, int numeroDeValores) {
    if (numeroDeValores > (CAPACIDADE - quantidadeValores)) {
        printf("\nImpossível inserir todos esses números: você só pode inserir %d números.", (CAPACIDADE - quantidadeValores));    
    } else {
        for (int contador = 0; contador <= quantidadeValores; contador++) {
            int auxiliar = quantidadeValores;
            printf("Digite o valor %d que deseja: ", contador + 1);
            scanf("%d", &vetor[auxiliar - 1]);
            auxiliar++;
        }    
    }    
} */

