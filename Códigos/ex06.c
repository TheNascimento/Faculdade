
float elevado(float X, int N){
    if(N==1){
        return X;
    }

    return X * elevado(X, N-1);
}

int somaVetorInteiros (int vet[], int tam){
    if(tam == 1){
        return vet[0];
    }
    else{
        return vet[tam] + somaVetorInteiros(vet, tam-1);
    }

}

