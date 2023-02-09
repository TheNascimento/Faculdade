package main

import "fmt"

type noh struct {
	valor int
	FB    int
	esq   *noh
	dir   *noh
}

func criaArv(val int) *noh {
	a := noh{val, 0, nil, nil}
	return &a
}

func (raiz *noh) arvAltura() int {
	if raiz != nil {
		a := raiz.dir.arvAltura() + 1
		b := raiz.esq.arvAltura() + 1
		if a > b {
			return a
		}
		return b
	}
	return 0
}

func (raiz *noh) fBal() int {
	return raiz.esq.arvAltura() - raiz.dir.arvAltura()
}

func atualizaFB(raiz *noh) {
	if raiz != nil {
		raiz.FB = raiz.fBal()
		atualizaFB(raiz.esq)
		atualizaFB(raiz.dir)
	}
}

func preOrder(raiz *noh) {
	if raiz != nil {
		fmt.Printf("\n%v", raiz)
		preOrder(raiz.esq)
		preOrder(raiz.dir)
	}
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
	atualizaFB(raiz)
	return raiz
}

func main() {
	raiz := criaArv(9)
	raiz.inserirNoh(10)
	raiz.inserirNoh(6)
	raiz.inserirNoh(4)
	raiz.inserirNoh(13)
	raiz.inserirNoh(7)
	raiz.inserirNoh(1)
	raiz.inserirNoh(2)
	preOrder(raiz)
	fmt.Printf("\n")
}
