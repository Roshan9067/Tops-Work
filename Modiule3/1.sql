mysql> create table student (Roll_No int primary key, Name varchar (50), branch varchar(50));
Query OK, 0 rows affected (0.02 sec)

mysql> insert into student values(1,"Jay","Computer Science"),(2,"Suhani", "Electronic and Com"),(3,"Kirti","Electronics and Com");
Query OK, 3 rows affected (0.01 sec)
Records: 3  Duplicates: 0  Warnings: 0

mysql> describe student;
+---------+-------------+------+-----+---------+-------+
| Field   | Type        | Null | Key | Default | Extra |
+---------+-------------+------+-----+---------+-------+
| Roll_No | int         | NO   | PRI | NULL    |       |
| Name    | varchar(50) | YES  |     | NULL    |       |
| branch  | varchar(50) | YES  |     | NULL    |       |
+---------+-------------+------+-----+---------+-------+
3 rows in set (0.00 sec)

mysql> select * from student;
+---------+--------+---------------------+
| Roll_No | Name   | branch              |
+---------+--------+---------------------+
|       1 | Jay    | Computer Science    |
|       2 | Suhani | Electronic and Com  |
|       3 | Kirti  | Electronics and Com |
+---------+--------+---------------------+
3 rows in set (0.00 sec)

mysql> create table Exam (Rollnum int , S_code varchar (20), Marks int, P_code varchar (40),foreign key (Rollnum) references student(Roll_no));
Query OK, 0 rows affected (0.07 sec)

mysql> describe exam;
+---------+-------------+------+-----+---------+-------+
| Field   | Type        | Null | Key | Default | Extra |
+---------+-------------+------+-----+---------+-------+
| Rollnum | int         | YES  | MUL | NULL    |       |
| S_code  | varchar(20) | YES  |     | NULL    |       |
| Marks   | int         | YES  |     | NULL    |       |
| P_code  | varchar(40) | YES  |     | NULL    |       |
+---------+-------------+------+-----+---------+-------+
4 rows in set (0.00 sec)

mysql> insert into exam values (1,"CS11",50,"CS"),(1,"CS12",60,"CS"),(2,"EC101",66,"CS"),(2,"EC102",70,"EC"),(3,"EC101",45,"EC"),(3,"EC102",50,"EC");
Query OK, 6 rows affected (0.01 sec)
Records: 6  Duplicates: 0  Warnings: 0

mysql> SELECT * FROM EXAM;
+---------+--------+-------+--------+
| Rollnum | S_code | Marks | P_code |
+---------+--------+-------+--------+
|       1 | CS11   |    50 | CS     |
|       1 | CS12   |    60 | CS     |
|       2 | EC101  |    66 | CS     |
|       2 | EC102  |    70 | EC     |
|       3 | EC101  |    45 | EC     |
|       3 | EC102  |    50 | EC     |
+---------+--------+-------+--------+
6 rows in set (0.00 sec)