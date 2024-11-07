mysql> select pro_code,avg(pro_price) as average_price from item group by pro_code;
+----------+---------------+
| pro_code | average_price |
+----------+---------------+
|       15 |          3200 |
|       16 |           500 |
|       14 |           250 |
|       11 |          5000 |
|       12 |           650 |
|       13 |          1475 |
+----------+---------------+
6 rows in set (0.01 sec)