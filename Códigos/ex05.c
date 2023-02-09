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
        printf("Eh 1 de mi para km, e 2 de km para mi");
        return 0;
    }
}

float RadToGraus (float a){
    return 360*a/(2*3.1412);
}

