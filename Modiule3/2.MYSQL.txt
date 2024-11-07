Enter password: ****
Welcome to the MySQL monitor.  Commands end with ; or \g.
Your MySQL connection id is 11
Server version: 8.0.39 MySQL Community Server - GPL

Copyright (c) 2000, 2024, Oracle and/or its affiliates.

Oracle is a registered trademark of Oracle Corporation and/or its
affiliates. Other names may be trademarks of their respective
owners.

Type 'help;' or '\h' for help. Type '\c' to clear the current input statement.
mysql> show databases;
+--------------------+
| Database           |
+--------------------+
| emp                |
| employee           |
| information_schema |
| mysql              |
| performance_schema |
| practice           |
| student            |
| student1           |
| sys                |
+--------------------+
9 rows in set (0.00 sec)

mysql> use employee;
Database changed
mysql> show tables;
+--------------------+
| Tables_in_employee |
+--------------------+
| employee           |
+--------------------+
1 row in set (0.00 sec)

mysql> describe employee;
+--------------+-------------+------+-----+---------+-------+
| Field        | Type        | Null | Key | Default | Extra |
+--------------+-------------+------+-----+---------+-------+
| Employee_Id  | int         | YES  |     | NULL    |       |
| First_Name   | varchar(20) | YES  |     | NULL    |       |
| Last_Name    | varchar(20) | YES  |     | NULL    |       |
| Salary       | int         | YES  |     | NULL    |       |
| Joining_date | date        | YES  |     | NULL    |       |
| Department   | varchar(50) | YES  |     | NULL    |       |
+--------------+-------------+------+-----+---------+-------+
6 rows in set (0.00 sec)

mysql> select * from employee;
+-------------+------------+-----------+---------+--------------+------------+
| Employee_Id | First_Name | Last_Name | Salary  | Joining_date | Department |
+-------------+------------+-----------+---------+--------------+------------+
|           1 | jhon       | abraham   | 1000000 | 2013-01-01   | Banking    |
+-------------+------------+-----------+---------+--------------+------------+
1 row in set (0.00 sec)

mysql> alter table employee modify Joining_date datetime;
Query OK, 1 row affected (0.10 sec)
Records: 1  Duplicates: 0  Warnings: 0

,'insurance);
    '>
    '> insert into employee values(2,'michael','clarke',800000,'2013-01-01 12.00.00','insurance);
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'michael','clarke',8------+---------+---------------------+------------+
1 row in set (0.00 sec)


mysql> insert into employee values(2,'michael','clarke',800000,'2013-01-01 12.00.00'00000,'2013-01-01 12.00.00','insurance)' at line 3
mysql> insert into employee values(2,'michael','clarke',800000,'2013-01-01 12.00.00','insurance');
Query OK, 1 row affected, 1 warning (0.01 sec)

mysql> insert into employee values(3,'Roy','thomas',700000,'2013-02-01 12.00.00','banking');
Query OK, 1 row affected, 1 warning (0.01 sec)

mysql> insert into employee values(4,'Tom','Jose',600000,'2013-02-01 12.00.00','insurance');
Query OK, 1 row affected, 1 warning (0.01 sec)

mysql> insert into employee values(5,'Jerry','Pinto',650000,'2013-02-01 12.00.00','insurance');
Query OK, 1 row affected, 1 warning (0.01 sec)

mysql> insert into employee values(6,'Philip','Mathew',750000,'2013-01-01 12.00.00','Services');
Query OK, 1 row affected, 1 warning (0.01 sec)

mysql> insert into employee values(7,'TestName1','123',650000,'2013-01-01 12.00.00','Services');
Query OK, 1 row affected, 1 warning (0.01 sec)

mysql> insert into employee values(8,'TestName2','Lname%',600000,'2013-02-01 12.00.00','insurance');
Query OK, 1 row affected, 1 warning (0.02 sec)

mysql> select * from employee;
+-------------+------------+-----------+---------+---------------------+------------+
| Employee_Id | First_Name | Last_Name | Salary  | Joining_date        | Department |
+-------------+------------+-----------+---------+---------------------+------------+
|           1 | jhon       | abraham   | 1000000 | 2013-01-01 12:00:00 | Banking    |
|           2 | michael    | clarke    |  800000 | 2013-01-01 12:00:00 | insurance  |
|           3 | Roy        | thomas    |  700000 | 2013-02-01 12:00:00 | banking    |
|           4 | Tom        | Jose      |  600000 | 2013-02-01 12:00:00 | insurance  |
|           5 | Jerry      | Pinto     |  650000 | 2013-02-01 12:00:00 | insurance  |
|           6 | Philip     | Mathew    |  750000 | 2013-01-01 12:00:00 | Services   |
|           7 | TestName1  | 123       |  650000 | 2013-01-01 12:00:00 | Services   |
|           8 | TestName2  | Lname%    |  600000 | 2013-02-01 12:00:00 | insurance  |
+-------------+------------+-----------+---------+---------------------+------------+
8 rows in set (0.00 sec)



mysql> update employee set joining_date = "2013-01-01 00:00:00" where Employee_Id in(1,2,6,7);
Query OK, 4 rows affected (0.01 sec)
Rows matched: 4  Changed: 4  Warnings: 0

mysql> update employee set joining_date = "2013-02-01 00:00:00" where Employee_Id in(3,4,5,8);
Query OK, 4 rows affected (0.01 sec)
Rows matched: 4  Changed: 4  Warnings: 0

mysql> select Employee_Id, Frirst_Name, Last_Name, Salary, date_format (Joining_date, '%y-%b-%d %h:%i:%s %p') as Joining_date, Department from employee;
ERROR 1054 (42S22): Unknown column 'Frirst_Name' in 'field list'
mysql> select Employee_Id, First_Name, Last_Name, Salary, date_format (Joining_date, '%y-%b-%d %h:%i:%s %p') as Joining_date, Department from employee;
+-------------+------------+-----------+---------+-----------------------+------------+
| Employee_Id | First_Name | Last_Name | Salary  | Joining_date          | Department |
+-------------+------------+-----------+---------+-----------------------+------------+
|           1 | jhon       | abraham   | 1000000 | 13-Jan-01 12:00:00 AM | Banking    |
|           2 | michael    | clarke    |  800000 | 13-Jan-01 12:00:00 AM | insurance  |
|           3 | Roy        | thomas    |  700000 | 13-Feb-01 12:00:00 AM | banking    |
|           4 | Tom        | Jose      |  600000 | 13-Feb-01 12:00:00 AM | insurance  |
|           5 | Jerry      | Pinto     |  650000 | 13-Feb-01 12:00:00 AM | insurance  |
|           6 | Philip     | Mathew    |  750000 | 13-Jan-01 12:00:00 AM | Services   |
|           7 | TestName1  | 123       |  650000 | 13-Jan-01 12:00:00 AM | Services   |
|           8 | TestName2  | Lname%    |  600000 | 13-Feb-01 12:00:00 AM | insurance  |
+-------------+------------+-----------+---------+-----------------------+------------+
8 rows in set (0.00 sec)

mysql> describe employee;
+--------------+-------------+------+-----+---------+-------+
| Field        | Type        | Null | Key | Default | Extra |
+--------------+-------------+------+-----+---------+-------+
| Employee_Id  | int         | YES  |     | NULL    |       |
| First_Name   | varchar(20) | YES  |     | NULL    |       |
| Last_Name    | varchar(20) | YES  |     | NULL    |       |
| Salary       | int         | YES  |     | NULL    |       |
| Joining_date | datetime    | YES  |     | NULL    |       |
| Department   | varchar(50) | YES  |     | NULL    |       |
+--------------+-------------+------+-----+---------+-------+
6 rows in set (0.04 sec)

mysql> alter table employee add primary key (Employee_id);
Query OK, 0 rows affected (0.20 sec)
Records: 0  Duplicates: 0  Warnings: 0

mysql> describe employee;
+--------------+-------------+------+-----+---------+-------+
| Field        | Type        | Null | Key | Default | Extra |
+--------------+-------------+------+-----+---------+-------+
| Employee_Id  | int         | NO   | PRI | NULL    |       |
| First_Name   | varchar(20) | YES  |     | NULL    |       |
| Last_Name    | varchar(20) | YES  |     | NULL    |       |
| Salary       | int         | YES  |     | NULL    |       |
| Joining_date | datetime    | YES  |     | NULL    |       |
| Department   | varchar(50) | YES  |     | NULL    |       |
+--------------+-------------+------+-----+---------+-------+
6 rows in set (0.00 sec)

mysql> create table incentive(Employee_ref_id int ,foreign key (Employee_ref_id) references Employee(Employee_Id),incentive_date date, incentive_amount int);
Query OK, 0 rows affected (0.06 sec)

mysql> descibe incentive;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'descibe incentive' at line 1
mysql> describe incentive;
+------------------+------+------+-----+---------+-------+
| Field            | Type | Null | Key | Default | Extra |
+------------------+------+------+-----+---------+-------+
| Employee_ref_id  | int  | YES  | MUL | NULL    |       |
| incentive_date   | date | YES  |     | NULL    |       |
| incentive_amount | int  | YES  |     | NULL    |       |
+------------------+------+------+-----+---------+-------+
3 rows in set (0.00 sec)

mysql> insert into incentive values(1,2013-02-01,5000);
ERROR 1292 (22007): Incorrect date value: '2010' for column 'incentive_date' at row 1
mysql> insert into incentive values(1,'2013-02-01',5000);
Query OK, 1 row affected (0.01 sec)

mysql> insert into incentive values(2,'2013-02-01',3000);
Query OK, 1 row affected (0.01 sec)

mysql> insert into incentive values(3,'2013-02-01',4000);
Query OK, 1 row affected (0.01 sec)

mysql> insert into incentive values(4,'2013-01-01',4500);
Query OK, 1 row affected (0.01 sec)

mysql> insert into incentive values(2,'2013-01-01',3500);
Query OK, 1 row affected (0.01 sec)

mysql> delete from incentive where Employee_ref_id=4;
Query OK, 1 row affected (0.01 sec)

mysql> insert into incentive values(1,'2013-01-01',4500);
Query OK, 1 row affected (0.01 sec)

mysql> select*from incentive;
+-----------------+----------------+------------------+
| Employee_ref_id | incentive_date | incentive_amount |
+-----------------+----------------+------------------+
|               1 | 2013-02-01     |             5000 |
|               2 | 2013-02-01     |             3000 |
|               3 | 2013-02-01     |             4000 |
|               2 | 2013-01-01     |             3500 |
|               1 | 2013-01-01     |             4500 |
+-----------------+----------------+------------------+
5 rows in set (0.00 sec)

mysql> delete from incentive where salary=3500;
ERROR 1054 (42S22): Unknown column 'salary' in 'where clause'
mysql> delete from incentive where incentive_amount=3500;
Query OK, 1 row affected (0.01 sec)

mysql> insert into incentive values(2,'2013-01-01',3500);
Query OK, 1 row affected (0.01 sec)

mysql> describe incentive;
+------------------+------+------+-----+---------+-------+
| Field            | Type | Null | Key | Default | Extra |
+------------------+------+------+-----+---------+-------+
| Employee_ref_id  | int  | YES  | MUL | NULL    |       |
| incentive_date   | date | YES  |     | NULL    |       |
| incentive_amount | int  | YES  |     | NULL    |       |
+------------------+------+------+-----+---------+-------+
3 rows in set (0.00 sec)

mysql> select*from incentive;
+-----------------+----------------+------------------+
| Employee_ref_id | incentive_date | incentive_amount |
+-----------------+----------------+------------------+
|               1 | 2013-02-01     |             5000 |
|               2 | 2013-02-01     |             3000 |
|               3 | 2013-02-01     |             4000 |
|               1 | 2013-01-01     |             4500 |
|               2 | 2013-01-01     |             3500 |
+-----------------+----------------+------------------+
5 rows in set (0.00 sec)

mysql> select Employee_Id, Frirst_Name, Last_Name, Salary, date_format (Joining_date, '%y-%b-%d %h:%i:%s %p') as Joining_date, Department from employee;
ERROR 1054 (42S22): Unknown column 'Frirst_Name' in 'field list'
mysql> select Employee_ref_id,date_format(incentive_date, '%y-%b-%d')as incentive_date,incentive_amount from employee);
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near ')' at line 1
mysql> select Employee_ref_id,date_format(incentive_date, '%y-%b-%d')as incentive_date,incentive_amount from employee;
ERROR 1054 (42S22): Unknown column 'Employee_ref_id' in 'field list'
mysql> select Employee_ref_id,date_format(incentive_date, '%y-%b-%d')as incentive_date,incentive_amount from incentive;
+-----------------+----------------+------------------+
| Employee_ref_id | incentive_date | incentive_amount |
+-----------------+----------------+------------------+
|               1 | 13-Feb-01      |             5000 |
|               2 | 13-Feb-01      |             3000 |
|               3 | 13-Feb-01      |             4000 |
|               1 | 13-Jan-01      |             4500 |
|               2 | 13-Jan-01      |             3500 |
+-----------------+----------------+------------------+
5 rows in set (0.00 sec)

mysql> select*from employee;
+-------------+------------+-----------+---------+---------------------+------------+
| Employee_Id | First_Name | Last_Name | Salary  | Joining_date        | Department |
+-------------+------------+-----------+---------+---------------------+------------+
|           1 | jhon       | abraham   | 1000000 | 2013-01-01 00:00:00 | Banking    |
|           2 | michael    | clarke    |  800000 | 2013-01-01 00:00:00 | insurance  |
|           3 | Roy        | thomas    |  700000 | 2013-02-01 00:00:00 | banking    |
|           4 | Tom        | Jose      |  600000 | 2013-02-01 00:00:00 | insurance  |
|           5 | Jerry      | Pinto     |  650000 | 2013-02-01 00:00:00 | insurance  |
|           6 | Philip     | Mathew    |  750000 | 2013-01-01 00:00:00 | Services   |
|           7 | TestName1  | 123       |  650000 | 2013-01-01 00:00:00 | Services   |
|           8 | TestName2  | Lname%    |  600000 | 2013-02-01 00:00:00 | insurance  |
+-------------+------------+-----------+---------+---------------------+------------+
8 rows in set (0.00 sec)

mysql> select*from incentive;
+-----------------+----------------+------------------+
| Employee_ref_id | incentive_date | incentive_amount |
+-----------------+----------------+------------------+
|               1 | 2013-02-01     |             5000 |
|               2 | 2013-02-01     |             3000 |
|               3 | 2013-02-01     |             4000 |
|               1 | 2013-01-01     |             4500 |
|               2 | 2013-01-01     |             3500 |
+-----------------+----------------+------------------+
5 rows in set (0.00 sec)

mysql> select first_name as employee_name where first_name = "tom";
ERROR 1054 (42S22): Unknown column 'first_name' in 'field list'
mysql> select first_name as employee_name  from employee where first_name = "tom";
+---------------+
| employee_name |
+---------------+
| Tom           |
+---------------+
1 row in set (0.01 sec)

mysql>
mysql> select first_name as employee_name where first_name = "tom";
ERROR 1054 (42S22): Unknown column 'first_name' in 'field list'
mysql> select first_name as employee_name  from employee where first_name = "tom";
+---------------+
| employee_name |
+---------------+
| Tom           |
+---------------+
1 row in set (0.01 sec)

mysql> SELSECT FIRST_NAME,JOINING_DATE,SALARY FROM EMPLOYEE;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'SELSECT FIRST_NAME,JOINING_DATE,SALARY FROM EMPLOYEE' at line 1
mysql> SELSECT FIRST_NAME,JOINING_DATE,SALARY FROM EMPLOYEE;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'SELSECT FIRST_NAME,JOINING_DATE,SALARY FROM EMPLOYEE' at line 1
mysql> SELECT FIRST_NAME,JOINING_DATE,SALARY FROM EMPLOYEE;
+------------+---------------------+---------+
| FIRST_NAME | JOINING_DATE        | SALARY  |
+------------+---------------------+---------+
| jhon       | 2013-01-01 00:00:00 | 1000000 |
| michael    | 2013-01-01 00:00:00 |  800000 |
| Roy        | 2013-02-01 00:00:00 |  700000 |
| Tom        | 2013-02-01 00:00:00 |  600000 |
| Jerry      | 2013-02-01 00:00:00 |  650000 |
| Philip     | 2013-01-01 00:00:00 |  750000 |
| TestName1  | 2013-01-01 00:00:00 |  650000 |
| TestName2  | 2013-02-01 00:00:00 |  600000 |
+------------+---------------------+---------+
8 rows in set (0.00 sec)

mysql> SELECT * FROM EMPLOYEE ORDER BY FIRST_NAME DESC;
+-------------+------------+-----------+---------+---------------------+------------+
| Employee_Id | First_Name | Last_Name | Salary  | Joining_date        | Department |
+-------------+------------+-----------+---------+---------------------+------------+
|           4 | Tom        | Jose      |  600000 | 2013-02-01 00:00:00 | insurance  |
|           8 | TestName2  | Lname%    |  600000 | 2013-02-01 00:00:00 | insurance  |
|           7 | TestName1  | 123       |  650000 | 2013-01-01 00:00:00 | Services   |
|           3 | Roy        | thomas    |  700000 | 2013-02-01 00:00:00 | banking    |
|           6 | Philip     | Mathew    |  750000 | 2013-01-01 00:00:00 | Services   |
|           2 | michael    | clarke    |  800000 | 2013-01-01 00:00:00 | insurance  |
|           1 | jhon       | abraham   | 1000000 | 2013-01-01 00:00:00 | Banking    |
|           5 | Jerry      | Pinto     |  650000 | 2013-02-01 00:00:00 | insurance  |
+-------------+------------+-----------+---------+---------------------+------------+
8 rows in set (0.00 sec)

mysql> SELECT * FROM EMPLOYEE ORDER BY FIRST_NAME ASC AND SALARY DESC;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'AND SALARY DESC' at line 1
mysql> SELECT * FROM EMPLOYEE ORDER BY FIRST_NAME ASC AND SALARY DESC;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'AND SALARY DESC' at line 1
mysql> SELECT * FROM EMPLOYEE ORDER BY FIRST_NAME asc;
+-------------+------------+-----------+---------+---------------------+------------+
| Employee_Id | First_Name | Last_Name | Salary  | Joining_date        | Department |
+-------------+------------+-----------+---------+---------------------+------------+
|           5 | Jerry      | Pinto     |  650000 | 2013-02-01 00:00:00 | insurance  |
|           1 | jhon       | abraham   | 1000000 | 2013-01-01 00:00:00 | Banking    |
|           2 | michael    | clarke    |  800000 | 2013-01-01 00:00:00 | insurance  |
|           6 | Philip     | Mathew    |  750000 | 2013-01-01 00:00:00 | Services   |
|           3 | Roy        | thomas    |  700000 | 2013-02-01 00:00:00 | banking    |
|           7 | TestName1  | 123       |  650000 | 2013-01-01 00:00:00 | Services   |
|           8 | TestName2  | Lname%    |  600000 | 2013-02-01 00:00:00 | insurance  |
|           4 | Tom        | Jose      |  600000 | 2013-02-01 00:00:00 | insurance  |
+-------------+------------+-----------+---------+---------------------+------------+
8 rows in set (0.00 sec)


mysql> SELECT * FROM EMPLOYEE ORDER BY FIRST_NAME asc, salary desc;
+-------------+------------+-----------+---------+---------------------+------------+
| Employee_Id | First_Name | Last_Name | Salary  | Joining_date        | Department |
+-------------+------------+-----------+---------+---------------------+------------+
|           5 | Jerry      | Pinto     |  650000 | 2013-02-01 00:00:00 | insurance  |
|           1 | jhon       | abraham   | 1000000 | 2013-01-01 00:00:00 | Banking    |
|           2 | michael    | clarke    |  800000 | 2013-01-01 00:00:00 | insurance  |
|           6 | Philip     | Mathew    |  750000 | 2013-01-01 00:00:00 | Services   |
|           3 | Roy        | thomas    |  700000 | 2013-02-01 00:00:00 | banking    |
|           7 | TestName1  | 123       |  650000 | 2013-01-01 00:00:00 | Services   |
|           8 | TestName2  | Lname%    |  600000 | 2013-02-01 00:00:00 | insurance  |
|           4 | Tom        | Jose      |  600000 | 2013-02-01 00:00:00 | insurance  |
+-------------+------------+-----------+---------+---------------------+------------+
8 rows in set (0.00 sec)

mysql>

mysql> select * from employee where name like 'j%';
ERROR 1054 (42S22): Unknown column 'name' in 'where clause'
mysql> select * from employee where first_name like 'j%';
+-------------+------------+-----------+---------+---------------------+------------+
| Employee_Id | First_Name | Last_Name | Salary  | Joining_date        | Department |
+-------------+------------+-----------+---------+---------------------+------------+
|           1 | jhon       | abraham   | 1000000 | 2013-01-01 00:00:00 | Banking    |
|           5 | Jerry      | Pinto     |  650000 | 2013-02-01 00:00:00 | insurance  |
+-------------+------------+-----------+---------+---------------------+------------+
2 rows in set (0.00 sec)

mysql> select * from employee where salary order by asc;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'asc' at line 1
mysql> select * from employee order by salary asc;
+-------------+------------+-----------+---------+---------------------+------------+
| Employee_Id | First_Name | Last_Name | Salary  | Joining_date        | Department |
+-------------+------------+-----------+---------+---------------------+------------+
|           4 | Tom        | Jose      |  600000 | 2013-02-01 00:00:00 | insurance  |
|           8 | TestName2  | Lname%    |  600000 | 2013-02-01 00:00:00 | insurance  |
|           5 | Jerry      | Pinto     |  650000 | 2013-02-01 00:00:00 | insurance  |
|           7 | TestName1  | 123       |  650000 | 2013-01-01 00:00:00 | Services   |
|           3 | Roy        | thomas    |  700000 | 2013-02-01 00:00:00 | banking    |
|           6 | Philip     | Mathew    |  750000 | 2013-01-01 00:00:00 | Services   |
|           2 | michael    | clarke    |  800000 | 2013-01-01 00:00:00 | insurance  |
|           1 | jhon       | abraham   | 1000000 | 2013-01-01 00:00:00 | Banking    |
+-------------+------------+-----------+---------+---------------------+------------+
8 rows in set (0.00 sec)

mysql> select department, max(salary) as max_salary from employee group by department order by max_salary desc;
+------------+------------+
| department | max_salary |
+------------+------------+
| Banking    |    1000000 |
| insurance  |     800000 |
| Services   |     750000 |
+------------+------------+
3 rows in set (0.01 sec

mysql> select employee.First_Name,incentive.incentive_amount from employee inner join incentive on employee.Employee_id = incentive.Employee_ref_id where incentive.incentive_amount > 3000;
+------------+------------------+
| First_Name | incentive_amount |
+------------+------------------+
| jhon       |             5000 |
| Roy        |             4000 |
| jhon       |             4500 |
| michael    |             3500 |
+------------+------------------+
4 rows in set (0.00 sec)


