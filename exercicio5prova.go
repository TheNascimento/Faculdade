package main

import "fmt"

type noh struct {
	valor int
	esq   *noh
	dir   *noh
}

func criaArv(val int) *noh {
	a := noh{val, nil, nil}
	return &a
}

func (raiz *noh) inserirNoh(val int) *noh {
	if raiz == nil {
		raiz = criaArv(val)
	} else {
		if val < raiz.valor {
			raiz.esq = raiz.esq.inserirNoh(val)
		} else if val > raiz.valor {
			raiz.dir = raiz.dir.inserirNoh(val)
		} else {
			fmt.Printf("Deu ruim! Já existe esse valor!")
		}
	}
	return raiz
}

func (raiz *noh) busca(chave int) **noh {
	var pno **noh
	if raiz == nil {
		return pno
	} else if chave == raiz.valor {
		pno = &raiz
	} else if chave < raiz.valor {
		pno = raiz.esq.busca(chave)
	} else {
		pno = raiz.dir.busca(chave)
	}
	return pno
}

func main() {
	raiz := criaArv(9)
	raiz.inserirNoh(10)
	raiz.inserirNoh(6)
	raiz.inserirNoh(4)
	raiz.inserirNoh(7)
	fmt.Printf("Endereço: %v", raiz.busca(6))
}
