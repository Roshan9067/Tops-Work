Enter password: ****
Welcome to the MySQL monitor.  Commands end with ; or \g.
Your MySQL connection id is 16
Server version: 8.0.39 MySQL Community Server - GPL

Copyright (c) 2000, 2024, Oracle and/or its affiliates.

Oracle is a registered trademark of Oracle Corporation and/or its
affiliates. Other names may be trademarks of their respective
owners.

Type 'help;' or '\h' for help. Type '\c' to clear the current input statement.

mysql> create database item;
Query OK, 1 row affected (0.01 sec)

mysql> use item;
Database changed
mysql> create table item(pro_id int,pro_name varchar(50),pro_price float,pro_code int);
Query OK, 0 rows affected (0.05 sec)

mysql> insert into item values(101,'mother board',3200.00,15);
Query OK, 1 row affected (0.01 sec)

mysql> insert into item values(102,'key board',450.00,16);
Query OK, 1 row affected (0.01 sec)

mysql> insert into item values(103,'zip drive',250.00,14);
Query OK, 1 row affected (0.01 sec)

mysql> insert into item values(104,'speaker',550.00,16);
Query OK, 1 row affected (0.01 sec)

mysql> insert into item values(105,'monitor',5000.00,11);
Query OK, 1 row affected (0.01 sec)

mysql> insert into item values(106,'dvd drive',900.00,12);
Query OK, 1 row affected (0.01 sec)

mysql> insert into item values(107,'cd drive',800.00,12);
Query OK, 1 row affected (0.01 sec)

mysql> insert into item values(108,'printer',2600.00,13);
Query OK, 1 row affected (0.01 sec)

mysql> insert into item values(109,'refill cartage',350.00,13);
Query OK, 1 row affected (0.01 sec)

mysql> insert into item values(10,'mouse',250.00,12);
Query OK, 1 row affected (0.01 sec)

mysql> select* from item;
+--------+----------------+-----------+----------+
| pro_id | pro_name       | pro_price | pro_code |
+--------+----------------+-----------+----------+
|    101 | mother board   |      3200 |       15 |
|    102 | key board      |       450 |       16 |
|    103 | zip drive      |       250 |       14 |
|    104 | speaker        |       550 |       16 |
|    105 | monitor        |      5000 |       11 |
|    106 | dvd drive      |       900 |       12 |
|    107 | cd drive       |       800 |       12 |
|    108 | printer        |      2600 |       13 |
|    109 | refill cartage |       350 |       13 |
|     10 | mouse          |       250 |       12 |
+--------+----------------+-----------+----------+
10 rows in set (0.00 sec)

mysql> select * from item where pro_price >=200 and pro_price <=600;
+--------+----------------+-----------+----------+
| pro_id | pro_name       | pro_price | pro_code |
+--------+----------------+-----------+----------+
|    102 | key board      |       450 |       16 |
|    103 | zip drive      |       250 |       14 |
|    104 | speaker        |       550 |       16 |
|    109 | refill cartage |       350 |       13 |
|     10 | mouse          |       250 |       12 |
+--------+----------------+-----------+----------+
5 rows in set (0.00 sec)

mysql> select avg(pro_price) as avg_price from item where pro_code=16;
+-----------+
| avg_price |
+-----------+
|       500 |
+-----------+
1 row in set (0.01 sec)

mysql> select pro_name as 'item name', pro_price as 'price in Rs.' from item;
+----------------+--------------+
| item name      | price in Rs. |
+----------------+--------------+
| mother board   |         3200 |
| key board      |          450 |
| zip drive      |          250 |
| speaker        |          550 |
| monitor        |         5000 |
| dvd drive      |          900 |
| cd drive       |          800 |
| printer        |         2600 |
| refill cartage |          350 |
| mouse          |          250 |
+----------------+--------------+
10 rows in set (0.00 sec)

mysql>