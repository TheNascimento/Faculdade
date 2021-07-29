SELECT first_name || ' ' || last_name AS Nomecompleto
FROM employees
WHERE hire_date = (SELECT MAX(hire_date)
FROM employees);

