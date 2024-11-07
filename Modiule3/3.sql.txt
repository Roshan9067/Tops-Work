3.sql
Enter password: ****
Welcome to the MySQL monitor.  Commands end with ; or \g.
Your MySQL connection id is 14
Server version: 8.0.39 MySQL Community Server - GPL

Copyright (c) 2000, 2024, Oracle and/or its affiliates.

Oracle is a registered trademark of Oracle Corporation and/or its
affiliates. Other names may be trademarks of their respective
owners.

Type 'help;' or '\h' for help. Type '\c' to clear the current input statement.

mysql> create database salesperson;
Query OK, 1 row affected (0.03 sec)

mysql> use salesperson;
Database changed

mysql> create table salesperson(PkSno int,sname varchar(50),city varchar(50),comm float);
Query OK, 0 rows affected (0.10 sec)

mysql> insert into salesperson values(1001,'peel','london',.12);
Query OK, 1 row affected (0.02 sec)

Enter password: ****
Welcome to the MySQL monitor.  Commands end with ; or \g.
Your MySQL connection id is 8
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
| salesperson        |
| student            |
| student1           |
| sys                |
+--------------------+
10 rows in set (0.02 sec)

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

mysql> insert into salesperson values(1001,'peel','london',0.12);
Query OK, 1 row affected (0.03 sec)

mysql> insert into salesperson values(1002,'serres','san jose',0.13);
Query OK, 1 row affected (0.01 sec)

mysql> insert into salesperson values(1004,'motika','london',0.11);
Query OK, 1 row affected (0.01 sec)

mysql> insert into salesperson values(1007,'rafkin','barcelona',0.15);
Query OK, 1 row affected (0.01 sec)

mysql> insert into salesperson values(1003,'axeirod','new york',0.10);
Query OK, 1 row affected (0.01 sec)

mysql> select * from salesperson;
+-------+---------+-----------+------+
| pksno | sname   | city      | comm |
+-------+---------+-----------+------+
|  1001 | peel    | london    | 0.12 |
|  1002 | serres  | san jose  | 0.13 |
|  1003 | axeirod | new york  | 0.10 |
|  1004 | motika  | london    | 0.11 |
|  1007 | rafkin  | barcelona | 0.15 |
+-------+---------+-----------+------+
5 rows in set (0.00 sec)

mysql> insert into customer values(201,'hoffman','london',100,1001);
Query OK, 1 row affected (0.02 sec)

mysql> insert into customer values(202,'giovanne','rom',200,1003);
Query OK, 1 row affected (0.00 sec)

mysql> insert into customer values(203,'liu','san jose',300,1002);
Query OK, 1 row affected (0.01 sec)

mysql> insert into customer values(204,'grass','barcelona',100,1002);
Query OK, 1 row affected (0.01 sec)

mysql> insert into customer values(206,'clemens','london',300,1007);
Query OK, 1 row affected (0.01 sec)

mysql> insert into customer values(207,'pereira','rom',100,1004);
Query OK, 1 row affected (0.01 sec)

mysql> select * from customer;
+-------+----------+-----------+--------+-------+
| pkcnm | cname    | city      | rating | fksno |
+-------+----------+-----------+--------+-------+
|   201 | hoffman  | london    |    100 |  1001 |
|   202 | giovanne | rom       |    200 |  1003 |
|   203 | liu      | san jose  |    300 |  1002 |
|   204 | grass    | barcelona |    100 |  1002 |
|   206 | clemens  | london    |    300 |  1007 |
|   207 | pereira  | rom       |    100 |  1004 |
+-------+----------+-----------+--------+-------+
6 rows in set (0.00 sec)

mysql> select * from salesperson where city=london, comm > 0.12;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near ', comm > 0.12' at line 1
mysql> select * from salesperson where city = 'london' and  comm > 0.12;
Empty set (0.00 sec)

mysql> select * from salesperson where city = 'barcelona' or city = 'london';
+-------+--------+-----------+------+
| pksno | sname  | city      | comm |
+-------+--------+-----------+------+
|  1001 | peel   | london    | 0.12 |
|  1004 | motika | london    | 0.11 |
|  1007 | rafkin | barcelona | 0.15 |
+-------+--------+-----------+------+
3 rows in set (0.00 sec)

mysql> select * from salesperson where comm > 0.10 and comm < 0.12;
+-------+--------+--------+------+
| pksno | sname  | city   | comm |
+-------+--------+--------+------+
|  1004 | motika | london | 0.11 |
+-------+--------+--------+------+
1 row in set (0.00 sec)

mysql> select * from cusomer where rating > 100 or (city = 'rom' and rating <=100);
ERROR 1146 (42S02): Table 'salesperson.cusomer' doesn't exist
mysql> select * from customer where rating > 100 or (city = 'rom' and rating <=100);
+-------+----------+----------+--------+-------+
| pkcnm | cname    | city     | rating | fksno |
+-------+----------+----------+--------+-------+
|   202 | giovanne | rom      |    200 |  1003 |
|   203 | liu      | san jose |    300 |  1002 |
|   206 | clemens  | london   |    300 |  1007 |
|   207 | pereira  | rom      |    100 |  1004 |
+-------+----------+----------+--------+-------+
4 rows in set (0.00 sec)

mysql> select * from salesperson;
+-------+---------+-----------+------+
| pksno | sname   | city      | comm |
+-------+---------+-----------+------+
|  1001 | peel    | london    | 0.12 |
|  1002 | serres  | san jose  | 0.13 |
|  1003 | axeirod | new york  | 0.10 |
|  1004 | motika  | london    | 0.11 |
|  1007 | rafkin  | barcelona | 0.15 |
+-------+---------+-----------+------+
5 rows in set (0.00 sec)

mysql>