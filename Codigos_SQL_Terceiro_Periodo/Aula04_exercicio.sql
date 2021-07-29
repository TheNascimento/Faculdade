/* 
	Autor: Tiago Luiz C. do Nascimento
	Período: 3º Ciência da Computação, curso de Banco de Dados
	Data: 16/04/2019	

	Exercícios da aula 04 SQL_Data Manipulation Language realizados com banco de dados fornecido pela professora.
*/

-- SQL-401: Adicionar a coluna REGION_ID como chave estrangeira da tabela REGIONS.

ALTER TABLE IF EXISTS countries
ADD CONSTRAINT countries_fk FOREIGN KEY (region_id) REFERENCES regions (region_id);

-- SQL-402: Adicionar a coluna MANAGER_ID como chave estrangeira da tabela EMPLOYEES.

ALTER TABLE IF EXISTS employees
ADD CONSTRAINT employees_fk2 FOREIGN KEY (manager_id) REFERENCES  employees(employee_id);

-- SQL-403: Adicionar uma restrição de chave única para a coluna EMAIL.

ALTER TABLE IF EXISTS employees
ADD CONSTRAINT email_unico UNIQUE (email);

-- SQL-404: Adicionar uma restrição de domínio para a coluna SALARY. Todos os salários devem ser maiores do que ZERO.

ALTER TABLE IF EXISTS employees 
ADD CHECK (salary > 0.00);

-- SQL-405: Adicionar a coluna JOB_ID com chave estrangeira da coluna JOBS.

ALTER TABLE IF EXISTS employees
ADD CONSTRAINT employees_fk FOREIGN KEY (job_id) REFERENCES jobs (job_id);

-- SQL-406: Adicionar uma restrição na tabela JOBS_HISTORY onde a data final (END_DATE) deve ser posterior a data inicial (START_DATE).

ALTER TABLE IF EXISTS job_history 
ADD CHECK (end_date > start_date);

-- SQL-407: Inserir na tabela EMPLOYEES um novo empregado.

INSERT INTO employees (employee_id, first_name, last_name, email, hire_date, job_id)
VALUES (90, 'Tiago', 'Nascimento', 'luiztiago009@gmail.com', '2018-04-17', 'IT_PROG');

-- SQL-408: Inserir na tabela EMPLOYEES um novo empregado sem departamento e comissão.

INSERT INTO employees (employee_id, first_name, last_name, email, hire_date, job_id)
VALUES (91, 'Fulano', 'Silva', 'fulanosilva@hotmail.com', '2018-04-17', 'AD_ASST');

-- SQL-409: Inserir o registro “7, South America” na tabela REGIONS

INSERT INTO regions
VALUES (7, 'South America');

-- SQL-410: Atualizar o MANAGER_ID da tabela DEPARTMENTS onde o nome do departamento (DEPARTMENT_NAME) é IT

UPDATE departments
SET manager_id = 89
WHERE department_name = 'IT';

-- SQL-411: Reajustar 10% o salário e 5% a comissão dos empregados.

UPDATE employees
SET salary = salary + salary * 0.10, commission_pct = commission_pct + commission_pct * 0.05;  

