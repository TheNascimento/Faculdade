

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
     int vetor[10], aux;
     for (int i =0; i<10;i++) {
            printf("Digite o numero %d do vetor : ",i+1);
            scanf("%d", &vetor[i]);

     }
     for(int x =0; x<10;x++){
        for(int y=x;y<10;y++){
            if(vetor[x]> vetor[y]){
                    aux = vetor[x];
                    vetor[x] = vetor[y];
                    vetor[y] = aux;
            }
        }

     }
     for (int i =0; i<10;i++){
            printf(" %d \n", vetor[i]);
     }

     }



