/* 
	Autor: Tiago Luiz C. do Nascimento
	Período: 3º Ciência da Computação, curso de Banco de Dados
	Data: 15/04/2019	

	Exercícios da aula 07 SQL - Funções de agregação realizados com banco de dados fornecido pela professora.
*/

-- 1) Recupere a quantidade de e média salarial dos funcionários

SELECT COUNT(employee_id) AS numero_de_funcionarios, AVG(salary) AS media_salarial 
FROM employees;

-- 2)Recuperar a soma dos salários de todos os funcionários, o salário máximo, o salário mínimo e a média dos salários.

SELECT SUM(salary) AS soma_salarios, MAX(salary) AS maior_salario, MIN(salary) AS menor_salario, AVG(salary) AS salario_medio
FROM employees;

-- 3) Recupere o número total de colaboradores que possuem o cargo IT_PROG.

SELECT COUNT(employee_id) AS programadores_ti 
FROM employees
WHERE job_id = 'IT_PROG';

-- 4) Recuperar a quantidade de salários distintos do cargo IT_PROG.

SELECT DISTINCT(salary)  AS salarios_distintos_ti
FROM employees
WHERE job_id = 'IT_PROG'
ORDER BY salary;

-- 5) Recuperar o salário máximo dos funcionários contratados após 15/11/2016.

SELECT MAX(salary) AS maior_salario_apos_data
FROM employees
WHERE (hire_date) > '2006-11-15';

-- 6)Apresentar o nome e o salário dos funcionários de forma alfabética e do maior para o menor salário, respectivamente.

SELECT first_name AS nome, salary AS salario
FROM employees
ORDER BY first_name, salario DESC; 

-- 7) Calcular o salário máximo e mínimo dos funcionários do departamento “Shipping”.

SELECT MAX(salary) AS maior_salario, MIN(salary) AS menor_salario
FROM employees
WHERE department_id = 50;

-- 8) Calcular o salário médio dos funcionários representantes de vendas (Sales Manager e Sales Representative).

SELECT AVG(salary) AS salario_medio
FROM employees
WHERE department_id IN (80, 240, 250);

-- 9) Calcular o salário máximo dos funcionários que possuem comissão.

SELECT MAX(salary) AS salario_maximo_comissionado
FROM employees
WHERE commission_pct IS NOT NULL;

-- 10) Informar quantos funcionários recebem entre 2.500 e 4.200

SELECT COUNT(employee_id) AS funcionarios_entre_valores
FROM employees
WHERE salary BETWEEN 2500 AND 4200;

-- 11) Informar quantos funcionários trabalham com vendas (Sales Manager e Sales Representative).

SELECT COUNT(employee_id) AS trabalham_com_vendas
FROM employees
WHERE department_id IN (80, 240, 250);

-- DESAFIO: Apresentar o nome do último funcionário contratado (hire_date).

SELECT first_name || ' ' || last_name AS Nomecompleto
FROM employees
WHERE hire_date = (SELECT MAX(hire_date)
FROM employees);



