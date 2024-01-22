-- 1
SELECT * FROM employees;

-- 2
SELECT first_name, salary FROM employees;

--3
SELECT * FROM employee
WHERE salary > 5000;

--4
SELECT * FROM employees
WHERE first_name LIKE 'A%';

--5
SELECT e1.employee_id, e1.first_name, e1.department_id
FROM employees e1
JOIN employees e2 ON e1.first_name = e2.first_name
JOIN departments d ON e1.department_id = d.department_id
WHERE e1.employee_id <> e2.employee_id;

--6
SELECT department_id, COUNT(*) AS numberOfEmployee
FROM employees
GROUP BY department_id;

--7 
SELECT department_id, COUNT(*) AS numberOfEmployee
FROM employees
GROUP BY department_id
HAVING COUNT(*) > 10;

--8
INSERT INTO employees
VALUES ( '1', 'My', 'Nguyen', 'test@gmail.com', '+84123456789', TO_DATE('22/1/2024', 'DD/MM/YYYY'), 'Job 1', 5000, 50, 'Manager 1', 'Dept 1');

--9
UPDATE employees
SET salary = salary * 1.1;

--10
DELETE FROM employees
WHERE employee_id = '10';