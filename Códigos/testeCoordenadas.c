#include "coord.h"
#include <stdlib.h>
#include <stdio.h>

void main (){

    coord *carro, *cidade;
    carro = criarPontos(1, 2.5, 3);
    cidade = criarPontos(5, 6.1, 2.7);
    printf("Distancia: %.2f", calcDist(carro, cidade));
    mostraCoord(carro);
}
