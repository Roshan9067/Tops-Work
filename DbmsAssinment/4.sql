Enter password: ****
Welcome to the MySQL monitor.  Commands end with ; or \g.
Your MySQL connection id is 14
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
| orders             |
| performance_schema |
| practice           |
| salesperson        |
| student            |
| student1           |
| sys                |
+--------------------+
11 rows in set (0.00 sec)

mysql> use salesperson;
Database changed
mysql> describe salesperson;
+-------+---------------+------+-----+---------+-------+
| Field | Type          | Null | Key | Default | Extra |
+-------+---------------+------+-----+---------+-------+
| pksno | int           | NO   | PRI | NULL    |       |
| sname | varchar(50)   | YES  |     | NULL    |       |
| city  | varchar(50)   | YES  |     | NULL    |       |
| comm  | decimal(10,2) | YES  |     | NULL    |       |
+-------+---------------+------+-----+---------+-------+
4 rows in set (0.01 sec)

mysql> describe customer;
+--------+-------------+------+-----+---------+-------+
| Field  | Type        | Null | Key | Default | Extra |
+--------+-------------+------+-----+---------+-------+
| pkcnm  | int         | NO   | PRI | NULL    |       |
| cname  | varchar(50) | YES  |     | NULL    |       |
| city   | varchar(50) | YES  |     | NULL    |       |
| rating | int         | YES  |     | NULL    |       |
| fksno  | int         | YES  | MUL | NULL    |       |
+--------+-------------+------+-----+---------+-------+
5 rows in set (0.00 sec)

mysql> create database salespeople;use salespeople;create table salespeople(salesman_id int primary key,name varchar(50),city varchar(50),commission decimal(10,2));create table ordrs(order_no int,purch_amt float,order_date date,customer_id int,salesman_id int, foreign key orders(salesman_id) references salespeople(salesman_id)); insert into salespeople values(5001,'james hoog','new york',0.15);insert into salespeople values(5002,'nail knite','paris',0.13);insert into salespeople values(5005,'pit alex','london',0.11);insert into salespeople values(5006,'mc lyon','paris',0.14);insert into salespeople values(5007,'paul adam','rome',0.13);insert into salespeople values(5003,'lauson hen','san jose',0.12);select * from salespeople;
ERROR 1007 (HY000): Can't create database 'salespeople'; database exists
Database changed
ERROR 1050 (42S01): Table 'salespeople' already exists
ERROR 1050 (42S01): Table 'ordrs' already exists
ERROR 1062 (23000): Duplicate entry '5001' for key 'salespeople.PRIMARY'
Query OK, 1 row affected (0.01 sec)

Query OK, 1 row affected (0.00 sec)

Query OK, 1 row affected (0.00 sec)

Query OK, 1 row affected (0.00 sec)

ERROR 1062 (23000): Duplicate entry '5003' for key 'salespeople.PRIMARY'
+-------------+------------+----------+------------+
| salesman_id | name       | city     | commission |
+-------------+------------+----------+------------+
|        5001 | james hoog | new york |       0.15 |
|        5002 | nail knite | paris    |       0.13 |
|        5003 | lauson hen | san jose |       0.12 |
|        5005 | pit alex   | london   |       0.11 |
|        5006 | mc lyon    | paris    |       0.14 |
|        5007 | paul adam  | rome     |       0.13 |
+-------------+------------+----------+------------+
6 rows in set (0.00 sec)

mysql> insert into orders values(70001,150.5,'2012-10-05',3005,5002);
ERROR 1146 (42S02): Table 'salespeople.orders' doesn't exist
mysql> insert into orders values(70001,150.5,'2012-10-05',3005,5002);