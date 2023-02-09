// Atividade do dia 11/08/2020
// Tiago Luiz Cabral do Nascimento, RA: 12359, 6º Período CC

No* Remover(no* a, int chave){
	If(a != NULL){
		If(a > chave){
			a -> direita = Remover(a -> dir, chave);
		}
	Else if(a -> valor < chave ){
		A -> esq = Remover (a -> esq, chave);
	}
	Else{
		If (a -> esq == NULL && a -> dir == NULL ){
			Free (a);
			Return NULL;
	}
		Else if (a -> esq == NULL){
			No* notemp;
			Notemp = a ;
			a = a -> dir;
			free (notemp);
			return a;
		}
		Else if (a -> dir == NULL){
			No* notemp;
			Notemp = a ;
			a = a -> esq;
			free (notemp);
			return a;
		}
		Else{ 
			No* notemp;
			Notemp = a;
				While (notemp != NULL){
				Notemp = notemp -> esq;
				}
				a -> valor = notemp -> valor;
				free (notemp);
				Return a;
			}
		}
	Return a;
}
