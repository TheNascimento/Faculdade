/*
 * Criar uma estrutura de 2 coordenadas com as funções:
 *
 * criarPonto
 * calcularDistancia
 * atribuirValorX
 * atribuirValorY
 * diferença                    Diferença entre os valor de X e Y
 * soma                         Soma dos valor de X e Y
 * dividir                      Divisão entre os valor de X e Y
 *
 * @author Tiago Luiz Cabral do Nascimento
 * @date 20/03/20
 *
 * Obs 1: Utilizei coordenadas inteiras para diferenciar dos exercícios dados em aula.
 * Obs 2: O código só compilou e executou normalmente com o compilador online de C (https://www.onlinegdb.com/online_c_compiler), Code Blocks deixou
 *a desejar.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Definição da estrutura com dois pontos X e Y.
struct ponto {
    int x, y;
};

typedef struct ponto pontos; // Renomeando a estrutura para facilitar o uso.

// Protótipos de todas as funções usadas.
pontos* criarPonto();
int calcularDistancia(pontos* ponto1, pontos* ponto2);
void atribuirValorX(pontos* pontox, int valor);
void atribuirValorY(pontos* pontoy, int valor);
int diferenca(pontos* ponto);
int soma(pontos* ponto);
int dividir(pontos* ponto);

int main () {
    // Implementação das funções e estrutura Ponto.
    pontos* ponto1 = criarPonto();
    pontos* ponto2 = criarPonto();
    pontos* ponto3 = criarPonto();
    int distancia = 0, subtrair = 0, somar = 0, divisao = 0;

    atribuirValorX(ponto1, 10);
    atribuirValorY(ponto1, 5);
    atribuirValorX(ponto2, 5);
    atribuirValorY(ponto2, 10);
    atribuirValorX(ponto3, 100);
    atribuirValorY(ponto3, 10);
    distancia = calcularDistancia(ponto1, ponto2);
    subtrair = diferenca(ponto1);
    somar = soma(ponto2);
    divisao = dividir(ponto3);

    printf("\t\t\t--- Exercício com TAD (Pontos Cartesianos) ---\n\n");
    printf("A distância entre o ponto 1 e o ponto 2 é de %d\n", distancia);
    printf("A diferença entre a coordenada X e Y do ponto 1 é de %d\n", subtrair);
    printf("A soma das coordenadas X e Y do ponto 2 é %d\n", somar);
    printf("O resultado da divisão inteira das coordenadas X e Y do ponto 3 é %d\n", divisao);
    printf("---------------------------------------------------------------------------------------" );

    return 0;
}

// Cria o ponto e aloca espaço na memória usando malloc() e sizeof() que retorna o quanto é necessário para a estrutura pontos.
pontos* criarPonto() {
    pontos* coordenadas = (pontos*) malloc(sizeof(pontos));

    return coordenadas;
}

// Calcula a distância inteira entre dois pontos usando a fórmula matemática.
int calcularDistancia(pontos* ponto1, pontos* ponto2) {
    return sqrt(pow(ponto1->x - ponto2->x, 2) + pow(ponto1->y - ponto2->y, 2));
}

// Atribui valor para o X de um ponto.
void atribuirValorX(pontos* pontox, int valor) {
    if (pontox != NULL){
        pontox->x = valor;
    }
}

// Atribui valor para o Y de um ponto.
void atribuirValorY(pontos* pontoy, int valor) {
    if (pontoy != NULL){
        pontoy->y = valor;
    }
}

// Calcula a diferença entre X e Y de um ponto. Se for positivo o X é maior, negativo é o Y.
int diferenca(pontos* ponto) {
    return ponto->x - ponto->y;
}

// Calcula a soma de X e Y de um ponto.
int soma(pontos* ponto) {
    return ponto->x + ponto->y;
}

// Calcula o resultado da divisão inteira entre X e Y.
int dividir(pontos* ponto) {
    return (ponto->x / ponto->y);
}
