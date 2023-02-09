struct ListaSimplesSequencial {
    char nome[50];
    int idade;

    int posicoes;
    int lista[20];  
};

struct ListaSimplesEncadeada {
    char nome[50];
    int idade;

    struct ListaSimplesEncadeada *proximo;
};

int main() {
    
    return 0;
}
