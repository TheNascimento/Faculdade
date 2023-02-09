// Função swap em GO
// Autor: Tiago Luiz Cabral do Nascimento, 6º Período, CC
// Data: 26/08/20

package main

import (
    "fmt"
)

func swap(a int, b int) (int, int) {
    return b, a
} 

func main() {
    fmt.Println(swap(300, 450)) // Alterar os valores no código mesmo que devem ser trocados.
}

       
