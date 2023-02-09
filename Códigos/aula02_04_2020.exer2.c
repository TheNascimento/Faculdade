/*
 *  Exercícios 02/04/2020
 *  • 2) Faça o mesmo programa do exercício
 *  anterior, porém, com uma struct que contém
 *  um vetor float de 30 posições e um número
 *  que indica o número de valores dentro do
 *  vetor.
 *  • Obrigatório: Os valores de entrada do vetor
 *  deve ser colocado por um “usuário” do
 *  programa.
 *
 *  @author Tiago Nascimento
 *  @date 06/04/2020
*/

#include <stdio.h>
#define CAPACIDADE 30

struct lista_estatica {
    float vetor[CAPACIDADE];
    int numeroValores;
};
typedef struct lista_estatica lista;

void ordernarCrescente(lista* lista);
void ordernarDecrescente(lista* lista);
void inserirNumero(lista* lista, int posicao, float valor);
void mostrarVetor(lista* lista);

int main() {
    lista lista1, *ponteiroLista = &lista1;
    lista1.numeroValores = 0;
    
    printf("\t\t\t --- Manipulação com vetores ---\n\n");
    for (int contador = 0; contador < CAPACIDADE; contador++) {
        printf("Digite o valor %d do vetor: ", contador + 1);
        scanf("%f", &lista1.vetor[contador]);
        lista1.numeroValores += 1;
    }
    
    inserirNumero(ponteiroLista, 22, 0);
    ordernarCrescente(ponteiroLista);
    printf("\n\nVetor ordenado crescente:\n\n");
    mostrarVetor(ponteiroLista);
    
    printf("-------------------------------------------------------");
    
    ordernarDecrescente(ponteiroLista);
    printf("\n\nVetor ordenado decrescente:\n\n");
    mostrarVetor(ponteiroLista);
    
	return 0;
}

void inserirNumero(lista* lista, int posicao, float valor) {
    lista->vetor[posicao] = valor;    
}

void ordernarCrescente(lista* lista) {
    int auxiliar;
    for(int contador1 = 0; contador1 < CAPACIDADE; contador1++){
        for(int contador2 = contador1; contador2 < CAPACIDADE; contador2++){
            if(lista->vetor[contador1] > lista->vetor[contador2]){
                auxiliar = lista->vetor[contador1];
                lista->vetor[contador1] = lista->vetor[contador2];
                lista->vetor[contador2] = auxiliar;
            }
        }
    }        
}

void ordernarDecrescente(lista* lista) {
    int auxiliar;
    for(int contador1 = 0; contador1 < CAPACIDADE; contador1++){
        for(int contador2 = contador1; contador2 < CAPACIDADE; contador2++){
            if(lista->vetor[contador1] < lista->vetor[contador2]){
                auxiliar = lista->vetor[contador1];
                lista->vetor[contador1] = lista->vetor[contador2];
                lista->vetor[contador2] = auxiliar;
            }
        }
    }        
}

void mostrarVetor(lista* lista) {
    for (int contador = 0; contador < CAPACIDADE; contador++){
            printf("%.2f\n", lista->vetor[contador]);
    }        
}
