/* Conjunto de ponto com 3 coordenadas

Arquivo de cabeçalho ".h" */

/* Estrutura declarada da TAD*/
typedef struct coordenadas coord;

/* Funções para implementação da TAD */
coord* criarPontos (float x, float y, float z); //cria uma estrutura e atribui os valores
void liberaM (coord* p);                        //Libera a memoria alocada de um ponto
void atribui (coord* p, float x, float y, float z); //atribui valores x, y e z a uma estrutura especifica
void acessaCoord (coord* p, float* a, float* b, float* c); //atribui o valor da coordenada p para as vari�veis a, b e c
void acessaX (coord* p, float* v);              //atribui o valor X da coordenada p para uma vari�vel v
void acessaY (coord* p, float* v);              //atribui o valor Y da coordenada p para uma vari�vel v
void acessaY (coord* p, float* v);              //atribui o valor Z da coordenada p para uma vari�vel v
float calcDist (coord* p, coord* q);            //calcula a distancia entre dois pontos
//float calcAngOrigem (coor* p);                  //calcula o �ngulo em graus do ponto em rela��o � origem
void mostraCoord (coord* p);                    //apresenta os valores contidos na estrutura
