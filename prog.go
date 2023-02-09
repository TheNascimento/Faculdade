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

func inserirNoh(val int, raiz *noh) *noh {
	if raiz == nil {
		raiz = criaArv(val)
	} else {
		if val < raiz.valor {
			raiz.esq = inserirNoh(val, raiz.esq)
		} else if val > raiz.valor {
			raiz.dir = inserirNoh(val, raiz.dir)
		} else {
			fmt.Printf("Deu ruim! Já existe esse valor!")
		}
	}
	return raiz
}

// func inOrder(Raiz *noh) {
// 	if Raiz != nil {
// 		inOrder(Raiz.esq)
// 		fmt.Printf("\n%v", Raiz.valor)
// 		inOrder(Raiz.dir)
// 	}
// }

// func preOrder(Raiz *noh) {
// 	if Raiz != nil {
// 		fmt.Printf("\n%v", Raiz.valor)
// 		inOrder(Raiz.esq)
// 		inOrder(Raiz.dir)
// 	}
// }

// func posOrder(Raiz *noh) {
// 	if Raiz != nil {
// 		inOrder(Raiz.esq)
// 		inOrder(Raiz.dir)
// 		fmt.Printf("\n%v", Raiz.valor)
// 	}
// }

func main() {
	raiz := criaArv(4)
	inserirNoh(5, raiz)
	inserirNoh(7, raiz)
	inserirNoh(3, raiz)
	inserirNoh(1, raiz)
	inserirNoh(2, raiz)
	inserirNoh(8, raiz)
	inserirNoh(10, raiz)
	inserirNoh(11, raiz)
	inserirNoh(9, raiz)
	inserirNoh(22, raiz)
	inserirNoh(16, raiz)
	inserirNoh(15, raiz)
	inserirNoh(20, raiz)
	fmt.Printf("%v", nivelArv(raiz, 0))
	// inOrder(raiz)
	// fmt.Printf("\n")
	// preOrder(raiz)
	// fmt.Printf("\n")
	// posOrder(raiz)
	// fmt.Printf("\n")
	// fmt.Printf("\n%v", raiz)
}
