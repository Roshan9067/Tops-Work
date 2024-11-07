mysql> select pro_name,pro_price
    -> from item
    -> where pro_price >= 250
    -> order by pro_price desc,pro_name asc;
+----------------+-----------+
| pro_name       | pro_price |
+----------------+-----------+
| monitor        |      5000 |
| mother board   |      3200 |
| printer        |      2600 |
| dvd drive      |       900 |
| cd drive       |       800 |
| speaker        |       550 |
| key board      |       450 |
| refill cartage |       350 |
| mouse          |       250 |
| zip drive      |       250 |
+----------------+-----------+
10 rows in set (0.01 sec)

mysql>
