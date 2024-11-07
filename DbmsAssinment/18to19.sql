mysql> create database salespeople;
Query OK, 1 row affected (0.01 sec)

mysql> use salespeople;
Database changed
mysql> create table salespeople(salesman_id int,name varchar(50),city varchar(50),commission decimal(10,2);
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '' at line 1
mysql> create table salespeople(salesman_id int primary key,name varchar(50),city varchar(50),commission decimal(10,2));
Query OK, 0 rows affected (0.03 sec)

mysql> create table orders(ord_no int,purch_amt float,ord_date date,customer int,salesman_id int,foreign key orders(salesman_id) references salespeople(salesman_id));
Query OK, 0 rows affected (0.05 sec)

mysql> describe salespeople;
+-------------+---------------+------+-----+---------+-------+
| Field       | Type          | Null | Key | Default | Extra |
+-------------+---------------+------+-----+---------+-------+
| salesman_id | int           | NO   | PRI | NULL    |       |
| name        | varchar(50)   | YES  |     | NULL    |       |
| city        | varchar(50)   | YES  |     | NULL    |       |
| commission  | decimal(10,2) | YES  |     | NULL    |       |
+-------------+---------------+------+-----+---------+-------+
4 rows in set (0.00 sec)

mysql> describe orders;
+-------------+-------+------+-----+---------+-------+
| Field       | Type  | Null | Key | Default | Extra |
+-------------+-------+------+-----+---------+-------+
| ord_no      | int   | YES  |     | NULL    |       |
| purch_amt   | float | YES  |     | NULL    |       |
| ord_date    | date  | YES  |     | NULL    |       |
| customer    | int   | YES  |     | NULL    |       |
| salesman_id | int   | YES  | MUL | NULL    |       |
+-------------+-------+------+-----+---------+-------+
5 rows in set (0.00 sec)

mysql> insert into salespeople values(5001,'james hooj','new york',0.15);
Query OK, 1 row affected (0.03 sec)

mysql> insert into salespeople values(5002,'nail knite','paris',0.13);
Query OK, 1 row affected (0.01 sec)

mysql> insert into salespeople values(5005,'pit alex','london',0.11);
Query OK, 1 row affected (0.01 sec)

mysql> insert into salespeople values(5006,'mc lyon','paris',0.14);
Query OK, 1 row affected (0.01 sec)

mysql> insert into salespeople values(5007,'paul adam','rome',0.13);
Query OK, 1 row affected (0.01 sec)

mysql> insert into salespeople values(5003,'lauson hen','san jose',0.12);
Query OK, 1 row affected (0.01 sec)

mysql> select * from salespeople;
+-------------+------------+----------+------------+
| salesman_id | name       | city     | commission |
+-------------+------------+----------+------------+
|        5001 | james hooj | new york |       0.15 |
|        5002 | nail knite | paris    |       0.13 |
|        5003 | lauson hen | san jose |       0.12 |
|        5005 | pit alex   | london   |       0.11 |
|        5006 | mc lyon    | paris    |       0.14 |
|        5007 | paul adam  | rome     |       0.13 |
+-------------+------------+----------+------------+
6 rows in set (0.00 sec)

mysql> insert into orders values(70001,150.5,'2012-10-05',3005,5002);
Query OK, 1 row affected (0.01 sec)

mysql> insert into orders values(70009,270.65,'2012-09-10',3001,5005);
Query OK, 1 row affected (0.01 sec)

mysql> insert into orders values(70002,65.26,'2012-10-05',3002,5001);
Query OK, 1 row affected (0.01 sec)

mysql> insert into orders values(7000,110.5,'2012-08-17',3009,5003);
Query OK, 1 row affected (0.01 sec)

mysql> insert into orders values(70007,948.5,'2012-09-10',3005,5002);
Query OK, 1 row affected (0.01 sec)

mysql> insert into orders values(70005,2400.6,'2012-07-27',3007,5001);
Query OK, 1 row affected (0.01 sec)

mysql> insert into orders values(70008,5760,'2012-09-10',3002,5001);
Query OK, 1 row affected (0.01 sec)

mysql> insert into orders values(70010,1983.43,'2012-10-10',3004,5006);
Query OK, 1 row affected (0.01 sec)

mysql> insert into orders values(70003,2480.4,'2012-10-10',3009,5003);
Query OK, 1 row affected (0.01 sec)

mysql> insert into orders values(70012,250.45,'2012-06-27',3008,5002);
Query OK, 1 row affected (0.01 sec)

mysql> insert into orders values(70011,75.29,'2012-08-17',3003,5007);
Query OK, 1 row affected (0.01 sec)

mysql> insert into orders values(70013,3045.6,'2012-04-25',3002,5001);
Query OK, 1 row affected (0.01 sec)

mysql> select * from orders;
+--------+-----------+------------+----------+-------------+
| ord_no | purch_amt | ord_date   | customer | salesman_id |
+--------+-----------+------------+----------+-------------+
|  70001 |     150.5 | 2012-10-05 |     3005 |        5002 |
|  70009 |    270.65 | 2012-09-10 |     3001 |        5005 |
|  70002 |     65.26 | 2012-10-05 |     3002 |        5001 |
|   7000 |     110.5 | 2012-08-17 |     3009 |        5003 |
|  70007 |     948.5 | 2012-09-10 |     3005 |        5002 |
|  70005 |    2400.6 | 2012-07-27 |     3007 |        5001 |
|  70008 |      5760 | 2012-09-10 |     3002 |        5001 |
|  70010 |   1983.43 | 2012-10-10 |     3004 |        5006 |
|  70003 |    2480.4 | 2012-10-10 |     3009 |        5003 |
|  70012 |    250.45 | 2012-06-27 |     3008 |        5002 |
|  70011 |     75.29 | 2012-08-17 |     3003 |        5007 |
|  70013 |    3045.6 | 2012-04-25 |     3002 |        5001 |
+--------+-----------+------------+----------+-------------+
12 rows in set (0.02 sec)

mysql> select ord_no,ord_date,purch_amt from orders where salesman_id = 5001;
+--------+------------+-----------+
| ord_no | ord_date   | purch_amt |
+--------+------------+-----------+
|  70002 | 2012-10-05 |     65.26 |
|  70005 | 2012-07-27 |    2400.6 |
|  70008 | 2012-09-10 |      5760 |
|  70013 | 2012-04-25 |    3045.6 |
+--------+------------+-----------+
4 rows in set (0.00 sec)

mysql>









