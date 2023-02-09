package main

import "fmt"

type TDado struct {
	nome  string
	sexo  string
	idade int
	peso  int
}

type noh struct {
	Dados TDado
	esq   *noh
	dir   *noh
}

func returnMan(root *noh) int {
	if root == nil {
		return 0
	} else {
		if root.Dados.sexo == "Man" {
			return returnMan(root.dir) + returnMan(root.esq) + 1
		} else {
			return returnMan(root.dir) + returnMan(root.esq)
		}
	}
}

func criaArv(name string, sex string, age int, peso int) *noh {
	b := TDado{name, sex, age, peso}
	a := noh{b, nil, nil}
	return &a
}

func (raiz *noh) inserirNoh(name string, sex string, age int, peso int) *noh {
	if raiz == nil {
		raiz = criaArv(name, sex, age, peso)
	} else {
		if peso < raiz.Dados.peso {
			raiz.esq = raiz.esq.inserirNoh(name, sex, age, peso)
		} else if peso > raiz.Dados.peso {
			raiz.dir = raiz.dir.inserirNoh(name, sex, age, peso)
		} else {
			fmt.Printf("Deu ruim! Já existe esse valor!")
		}
	}
	return raiz
}

// func (root *noh) amountMale(amount int) int {
// 	if root != nil {
// 		root.esq.amountMale(amount)
// 		root.dir.amountMale(amount)
// 		if root.Dados.sexo == "Man" {
// 			amount += 1
// 		}
// 	}
// 	return amount
// }

func main() {
	raiz := criaArv("Paulo", "Man", 20, 15)
	raiz.inserirNoh("Paula", "Woman", 25, 20)
	raiz.inserirNoh("Carlos", "Man", 30, 12)
	raiz.inserirNoh("Laura", "Woman", 22, 2)
	raiz.inserirNoh("Borges", "Man", 35, 29)
	// fmt.Printf("%d", returnMan(raiz))
	// fmt.Printf("\n")
	// fmt.Printf("%d", raiz.amountMale(0))
}
