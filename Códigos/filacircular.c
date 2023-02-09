#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "filacircular.h"


void main(){

////////////Personagens//////////////////////////////
    pers meg;
    pers mar;
    pers ale;
    pers bom;
    pers son;
    strcpy(meg.p,"Megamam");
    strcpy(mar.p,"Mario");
    strcpy(ale.p,"AlexKidd");
    strcpy(bom.p,"Bomberman");
    strcpy(son.p,"Sonic");
////////////////////////////////////////////////////

/////Cria��o da fila////////////////////////////////
    fila* filac = filaCirc();

/////manipula��o da fila////////////////////////////
    enqueue(filac, meg);
    imprimirF(filac);
    enqueue(filac, ale);
    enqueue(filac, mar);
    enqueue(filac, son);
    enqueue(filac, bom);
    imprimirF(filac);
    enqueue(filac, meg);
    dequeue(filac);
    dequeue(filac);
    imprimirF(filac);
    enqueue(filac, ale);
    imprimirF(filac);
    dequeue(filac);
    imprimirF(filac);
    imprimirP(frontF(filac));



    free(filac);
}

