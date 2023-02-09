<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <title>PHP</title>
</head>

<body>

<?php
    class Funcionario {
        //atributos
        public $nome = null;
        public $idade = null;
        public $numFilhos = null;

        //getters setters
        function setNome($nome) {
            $this->nome = $nome;
        }

        function setNumFilhos($numFilhos) {
            $this->numFilhos = $numFilhos;
        }

        function getNome() {
            return $this->nome;
        }

        function getNumFilhos() {
            return $this->numFilhos;
        }

        //métodos
        function resumirCadFunc(){
            /* this, operador de ajuste de contexto */
            return "$this->nome possui $this->numFilhos filhos(s)";
        }

        function modificarNumFilhos($numFilhos){
            $this->numFilhos = $numFilhos;
            //numFilhos: variavel do objeto que pertence a class
            //$numFilhos: variavel do método recebido por parametro
        }
    }

    $func_1 = new Funcionario();
    $func_1->setNome('João');
    $func_1->setNumFilhos(2);
    echo $func_1->getNome() . ' possui ' . $func_1->getNumFilhos() . ' filho(s) ';
    
    echo '<br />';
    
    $func_2 = new Funcionario();
    $func_2->setNome('Maria');
    $func_2->setNumFilhos(1);
    echo $func_2->getNome() . ' possui ' . $func_2->getNumFilhos() . ' filho(s) ';
    
?>
</body>

</html>
