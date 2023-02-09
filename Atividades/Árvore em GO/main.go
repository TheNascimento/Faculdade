// Árvore Binária em GO
// Autor: Tiago Luiz Cabral do Nascimento, 6º Período, CC
// Data: 26/08/20

package main
  
import (
    "fmt"
    "os"
    "io"
)
  
type NoBinario struct {
    esquerdo  *NoBinario
    direito *NoBinario
    dado  int64
}
  
type ArvoreBinaria struct {
    raiz *NoBinario
}
  
func (t *ArvoreBinaria) insert(dado int64) *ArvoreBinaria {
    if t.raiz == nil {
        t.raiz = &NoBinario{dado: dado, esquerdo: nil, direito: nil}
    } else {
        t.raiz.insert(dado)
    }
    return t
}
  
func (n *NoBinario) insert(dado int64) {
    if n == nil {
        return
    } else if dado <= n.dado {
        if n.esquerdo == nil {
            n.esquerdo = &NoBinario{dado: dado, esquerdo: nil, direito: nil}
        } else {
            n.esquerdo.insert(dado)
        }
    } else {
        if n.direito == nil {
            n.direito = &NoBinario{dado: dado, esquerdo: nil, direito: nil}
        } else {
            n.direito.insert(dado)
        }
    }   
}
  
func print(valor io.Writer, no *NoBinario, ns int, ch rune) {
    if no == nil {
        return
    }
  
    for i := 0; i < ns; i++ {
        fmt.Fprint(valor, " ")
    }
    fmt.Fprintf(valor, "%c:%v\n", ch, no.dado)
    print(valor, no.esquerdo, ns+2, 'E')
    print(valor, no.direito, ns+2, 'D')
}
  
func main() {
    arvore := &ArvoreBinaria{}
    
    arvore.insert(3123).
        insert(131).
        insert(-1150).
        insert(56654).
        insert(1312).
        insert(1350).
        insert(-90).
        insert(-515).
        insert(-82).
        insert(145).
        insert(10).
        insert(100)
    
    print(os.Stdout, arvore.raiz, 0, 'M')
}
