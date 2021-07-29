/* 
	Autor: Tiago Luiz C. do Nascimento
	Período: 3º Ciência da Computação, curso de Banco de Dados
	Data: 16/04/2019	

	Segundo exercício completo da Aula 03 - SQL_Data Definition Language
	Crie as tabelas a seguir com suas respectivas chaves estrangeiras:
	
	-- Disciplina (_CodDisc_, NomeDisc)
	-- Curso (_CodCr_, NomeCr)
	-- Curriculo (_CodCr*_, _CodDisc*_, Obr/Opc)
		CodCr referencia Curso
		CodDisc referencia Disciplina
	-- Sala (_CodSl_,Capacidade, _CodPr*_)
		CodPr referencia Prédio
	-- Prédio (_CodPr_, Endereço)
	-- Turma (_Anosem_, _SiglaTur_, Capacidade, _CodDisc*_, _CodPr*_, _CodSl*_)
		CodDisc referencia Disciplina
		(CodPr, CodSl) referencia Sala

	Nota: _nomecampo_ denota uma chave primária!
*/

CREATE TABLE IF NOT EXISTS disciplina (
	coddisc serial PRIMARY KEY,
	nomedisc VARCHAR (255) NOT NULL
);

CREATE TABLE IF NOT EXISTS curso (
	codcr serial PRIMARY KEY,
	nomecr VARCHAR (255) NOT NULL
);

CREATE TABLE IF NOT EXISTS curriculo (
	codcr serial,
	coddisc serial,
	CONSTRAINT curriculo_pk PRIMARY KEY (codcr, coddisc),
	CONSTRAINT curriculo_fk1 FOREIGN KEY (codcr) REFERENCES curso (codcr),
	CONSTRAINT curriculo_fk2 FOREIGN KEY (coddisc) REFERENCES disciplina (coddisc)
);

CREATE TABLE IF NOT EXISTS predio (
	codpr serial PRIMARY KEY,
	endereco VARCHAR (255) NOT NULL
);

CREATE TABLE IF NOT EXISTS sala (
	codsl serial,
	capacidade smallint CHECK (capacidade > 0),
	codpr serial,
	CONSTRAINT sala_pk PRIMARY KEY (codsl, codpr),
	CONSTRAINT sala_fk FOREIGN KEY (codpr) REFERENCES predio (codpr)
);

CREATE TABLE IF NOT EXISTS turma (
	anosem smallint CHECK (anosem >= 2019),
	siglatur VARCHAR (5) UNIQUE,
	capacidade smallint CHECK (capacidade > 0),
	coddisc serial,
	codpr serial,
	codsl serial,
	CONSTRAINT turma_pk PRIMARY KEY (anosem, siglatur, coddisc, codpr, codsl),
	CONSTRAINT turma_fk1 FOREIGN KEY (coddisc) REFERENCES disciplina (coddisc),
	CONSTRAINT turma_fk2 FOREIGN KEY (codpr, codsl) REFERENCES sala (codpr, codsl)
);
