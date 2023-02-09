#include<stdlib.h>;

float elevado(float X, int N){
    if(N==1){
        return X;
    }

    return X * elevado(X, N-1);
}

int somaVetorInteiros (int vet[], int tam){
    if(sizeof(vet)/sizeof(int)<tam){
        printf("Seu animal, o vetor eh menor que isso! Resultado Errado\n");
        return 0;
    }
    if(tam == 1){
        return vet[0];
    }
    else{
        return vet[tam-1] + somaVetorInteiros(vet, tam-1);
    }

}

int ehPar(int a){
    if(a%2 >0){
        return 0;
    } else { return 1; }
}

float miTokm_Or_kmTomi(float a, int b){
    if (b == 1){
        return a/0.62137;
    }
    else if(b == 2){
        return a*0.62137;
    }
    else{
        printf("\nEh 1 de mi para km, e 2 de km para mi, seu animal\n");
        return 0;
    }
}

float RadToGraus (float a){
    return 360*a/(2*3.1412);
}

struct cadastro{
    char sobrenome[20];
    long int CPF, CEP;
    int idade;
};

void insereDados(struct cadastro* pessoa){
    printf("Qual eh seu sobrenome? ");
    scanf(" %s",&pessoa->sobrenome);
    printf("Qual eh seu CPF? ");
    scanf(" %li",&pessoa->CPF);
    printf("Qual eh seu CEP? ");
    scanf(" %li",&pessoa->CEP);
    printf("Qual eh sua idade? ");
    scanf(" %i",&pessoa->idade);
}

void mostraDados (struct cadastro pessoa){
    printf("\nSobrenome: %s",pessoa.sobrenome);
    printf("\nCPF: %li",pessoa.CPF);
    printf("\nCEP: %li",pessoa.CEP);
    printf("\nIdade: %i",pessoa.idade);
}

void main(){
    int vetor[9]={1,2,3,4,5,6,7,8,9};
    struct cadastro ficha;
    insereDados(&ficha);
    if(ehPar(vetor[1])){
        printf("Eh verdadeiro, eh par! 1\n");
    }
    if(ehPar(vetor[2])){
        printf("Eh verdadeiro, eh par! 2\n");
    }
    printf("O valor em graus eh: %.2f\n",RadToGraus(3.1412));
    printf("O valor em milhas eh: %.2f\n",miTokm_Or_kmTomi(500,2));
    printf("O valor em milhas eh: %.2f\n",miTokm_Or_kmTomi(500,3));
    printf("O valor de elevado eh: %.2f\n",elevado(vetor[2],vetor[2]));
    printf("O valor da soma do vetor eh: %d\n",somaVetorInteiros(vetor,10));
    mostraDados(ficha);
}

