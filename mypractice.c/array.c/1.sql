create database Account;
use Account;
create table account(ano int,aname Varchar(50),address varchar(50));
insert into account values(101,"Nirja Singh","Bangalore");

insert into account values(102,"Rohan Gupta","Chennai");
insert into account values(103,"Ali Raza","Hydrabad");
insert into account values(104,"Rishab Jain","Chennai");
insert into account values(105,"Simran Kaur","Chandigarh");
Select * from account;

alter table Account add primary key(ano);
describe Account;

create table transact(Trno int,Ano int,Amount int,Type Varchar(50),Dot date);
insert into Transact values(001,101,2500,"Withdraw","2017-12-21");
insert into Transact values(002,103,3000,"Deposite","2017-06-01");
insert into Transact values(003,102,2000,"Withdraw","2017-05-12");
insert into Transact values(004,103,1000,"Deposite","2017-10-22");
insert into Transact values(005,102,12000,"Deposite","2017-11-06");

Select * from transact;

truncate table transact;

use practice;
describe result;

delimiter //
create trigger stud_result
before insert on result 
for each row
begin
     set new.total=new.sub1+new.sub2+new.sub3;
     set new.per=(new.total/300)*100;
end //
delimiter ;

insert into result(name,sub1,sub2,sub3) values("abc",50,50,50);
select * from result; 

drop trigger stud_result;


use employee;
select * from employee;

create table backupemployee(Employee_id int primary key, First_Name varchar(50), Last_Name varchar(50), Salary int, joining_date date,Department varchar(50));

delimiter //
create trigger add_data
after insert on Employee
for each row
begin
      insert into backupEmployee values(new.Employee_id,new.First_Name,new.Last_Name,new.Salary,new.joining_date,new.Department);
end //
delimiter ;

insert into Employee (Employee_id , First_Name, Last_Name, Salary , joining_date ,Department) values (9,"roshan","gupta",45000,'2024-01-01 00:00:00',"IT");
select * from backupEmployee;




