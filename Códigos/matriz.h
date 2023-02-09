/* TAD: Matriz m por n */

/* Tipo Exportado */
typedef struct matriz Matriz;

/* Fun��es Exportadas */
/* Fun��o cria -Aloca e retorna matriz m por n */
Matriz* cria (int m, int n);

/* Fun��o libera -Libera a mem�ria de uma matriz */
void libera (Matriz* mat);

/* Fun��o acessa -Retorna o valor do elemento [i][j] */
float acessa (Matriz* mat, int i, int j);

/* Fun��o atribui -Atribui valor ao elemento [i][j] */
void atribui (Matriz* mat, int i, int j, float v);

/* Fun��o linhas -Retorna o no. de linhas da matriz */
int linhas (Matriz* mat);

/* Fun��o colunas -Retorna o no. de colunas da matriz */
int colunas (Matriz* mat);
