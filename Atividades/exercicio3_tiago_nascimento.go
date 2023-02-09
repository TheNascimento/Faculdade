// Tiago Luiz Cabral do Nascimento, 6º Período CC, RA: 12359

package main

import "fmt"

type noh struct {
	valor string
	esq   *noh
	dir   *noh
}

func criaArv(val string) *noh {
	a := noh{val, nil, nil}
	return &a
}

func nivelArv(raiz *noh, niv int) int {
	if raiz != nil {
		a := nivelArv(raiz.dir, niv+1)
		b := nivelArv(raiz.esq, niv+1)
		if a > b {
			return a
		} else {
			return b
		}
	} else {
		return niv - 1
	}
}

func inserirNoh(val string, raiz *noh) *noh {
	if raiz == nil {
		raiz = criaArv(val)
	} else {
		if val < raiz.valor {
			raiz.esq = inserirNoh(val, raiz.esq)
		} else if val > raiz.valor {
			raiz.dir = inserirNoh(val, raiz.dir)
		} else {
			fmt.Printf("Esta sequência já existe dentro da árvore.")
		}
	}
	return raiz
}

func inOrder(Raiz *noh) {
 	if Raiz != nil {
 		inOrder(Raiz.esq)
 		fmt.Printf("\n%v", Raiz.valor)
 		inOrder(Raiz.dir)
	}
}

func preOrder(Raiz *noh) {
	if Raiz != nil {
 		fmt.Printf("\n%v", Raiz.valor)
 		inOrder(Raiz.esq)
 		inOrder(Raiz.dir)
 	}
 }

func posOrder(Raiz *noh) {
	if Raiz != nil {
 		inOrder(Raiz.esq)
 		inOrder(Raiz.dir)
 		fmt.Printf("\n%v", Raiz.valor)
	}
}

func main() {
	raiz := criaArv("teste")
	inserirNoh("0", raiz)
	inserirNoh("1", raiz)
	inserirNoh("3", raiz)
	inserirNoh("000", raiz)
	inserirNoh("10", raiz)
	inserirNoh("10000", raiz)
	fmt.Printf("%v", nivelArv(raiz, 0))
	inOrder(raiz)
	fmt.Printf("\n")
	preOrder(raiz)
	fmt.Printf("\n")
	posOrder(raiz)
	fmt.Printf("\n")
	fmt.Printf("\n%v", raiz)
}
