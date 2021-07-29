/* 
	Autor: Tiago Luiz C. do Nascimento
	Período: 3º Ciência da Computação, curso de Banco de Dados
	Data: 16/04/2019	

	Primeiro exercício completo da Aula 03 - SQL_Data Definition Language	
	Crie as tabelas a seguir com suas respectivas chaves estrangeiras:
	
	-- Agencia (_Número_, Endereço, CódigoBanco)
	-- Conta (_Número_, Saldo, Tipo, _NumAgência*_)
	-- Cliente(_CPF_, nome, renda, endereço, telefone, profissão)
	-- Emprestimo (_Numero_, Valor, Tipo, _NumAg*_)
	-- Cliente_Emprestimo (_CPF*_, _NumEmprest*_)
	-- Cliente_Conta (_CPF*_, _NumeroConta*_)

	Nota: O _nomedocampo_ denota as chaves primárias das tabelas!
*/

CREATE TABLE IF NOT EXISTS agencia (
	numero integer CHECK (numero >= 0) PRIMARY KEY, 
	endereco VARCHAR (255) NOT NULL,
	codigobanco integer NOT NULL CHECK (codigobanco >= 0)
);

CREATE TABLE IF NOT EXISTS conta (
	numero serial UNIQUE,
	saldo double precision DEFAULT 0.00,
	tipo VARCHAR (255) NOT NULL,
	numagencia integer,
	CONSTRAINT conta_pk PRIMARY KEY (numero, numagencia),
	CONSTRAINT conta_fk FOREIGN KEY (numagencia) REFERENCES agencia (numero)
);

CREATE TABLE IF NOT EXISTS cliente (
	cpf char (11) PRIMARY KEY,
	nome VARCHAR (255) NOT NULL,
	renda double precision CHECK (renda > 0.00),
	endereco VARCHAR (255),
	telefone VARCHAR (10),
	profissao VARCHAR (255)
);

CREATE TABLE IF NOT EXISTS emprestimo (
	numero serial UNIQUE,
	valor double precision CHECK (valor > 0.00) NOT NULL,
	tipo VARCHAR (255) NOT NULL,
	numag integer,
	CONSTRAINT emprestimo_pk PRIMARY KEY (numero, numag),
	CONSTRAINT emprestimo_fk FOREIGN KEY (numag) REFERENCES agencia (numero)
);

CREATE TABLE IF NOT EXISTS cliente_emprestimo (
	cpf CHAR (11),
	numemprest serial,
	numag integer, -- Campo adicionado para fazer referencia correta com a tabela Emprestimo
	CONSTRAINT cliente_emprestimo_pk PRIMARY KEY (cpf, numemprest),
	CONSTRAINT cliente_emprestimo_fk1 FOREIGN KEY (cpf) REFERENCES cliente (cpf),
	CONSTRAINT cliente_emprestimo_fk2 FOREIGN KEY (numemprest, numag) REFERENCES emprestimo (numero, numag)
);

CREATE TABLE IF NOT EXISTS cliente_conta (
	cpf CHAR (11),
	numeroconta serial,
	numeroagencia integer, -- Campo adicionado para fazer referencia correta com a tabela Conta
	CONSTRAINT cliente_conta_pk PRIMARY KEY (cpf, numeroconta),
	CONSTRAINT cliente_conta_fk1 FOREIGN KEY (cpf) REFERENCES cliente (cpf),
	CONSTRAINT cliente_conta_fk2 FOREIGN KEY (numeroconta, numeroagencia) REFERENCES conta (numero,numagencia)
);
