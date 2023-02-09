#include <stdio.h> //printf e scanf usam essa biblioteca
#include <stdlib.h>

//fun��o que tem um retorno e pode ter ou n�o par�metros
//tiporetorno nomedafun��o (par�metros){ }
int ornitorrinco (int a){
    a=a+3;
    return a;
}

//fatora��o de n!=n*(n-1)*(n-2)*...*1
int fatoracao(int n){ //n=5; i=4;i=3;i=2;i=1
    for(int i=n-1; i>=1;i--){ //subtrai 1 a cada repeti��o
       n=n*i;
    }
    return n;
}

//fun��o dentro de fun��o
float combinacao(int n, int p){
    float comb;
    comb = fatoracao(n)/(fatoracao(p)*fatoracao(n-p));
    return comb;
}

//Fun��o Recursiva (quadrado dentro de quadrado)
float fatoracaoRec(int n){
    if(n == 1){
        return n;
    }
    return n*fatoracaoRec(n-1); //se n= 5, eu to retornando 5*fatoracaoRec(4)
}

void main(){
    int a;
    float b;
    char c;
    int contador=0;
    int bb;

    a=2;
    b=8.5;
    c='b';

    //estrutura condicional
    //se (a � menor que b) ent�o
    if(a<b){
        a++; //a+1=3
        b--; //b-1=7,5
    }

    //estrutura de repeti��o
    //enquanto (condi��o)
    while(a<b){
        a++; //a=4;a=5;a=6
        b = b - 0.5; //b=7;b=6,5;b6
        contador++; //contador soma mais 1 a cada repeti��o
    }
    printf("o valor de contador: %d \n",contador); //contador=3

    //para (in�cio; condi��o de parada; passo)
    for(int i=0; i < contador; i++){
        b= b + 0.5;
        a= a + b;
    }
    printf("valor de b eh: %f\n", b); //pesquisar printf e scanf

    bb=ornitorrinco(contador); //bb = contador+3
    printf("\n O valor de bb: %d", bb);

    printf("\n%d",fatoracao(a-20));//a fun��o esta retornando valor para o printf
    b=combinacao(4,2); //combina��o de a at� bb, para a vari�vel
    printf("\nvalor de b eh: %f\n", b);
}

