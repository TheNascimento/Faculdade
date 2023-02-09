#include <stdlib.h>
#include <stdio.h>

void main(){
    int x1,x2,y1,y2;
    float a,e,dx,dy;
    x1=1;
    x2=5;
    y1=1;
    y2=8;
    dx=(x2-x1);
    dy=(y2-y1);
    a=dy/dx;
    e=a-0.5;
    printf("Pontos a serem colocados para representar a reta: \n");
    for(int i=1; i<=dx+1;i++){
        printf("%d , %d\n",x1,y1);
        while(e >= 0){
            y1=y1+1;
            e=e-1;
        }
        x1+=1;
        e=e+a;
    }
}

