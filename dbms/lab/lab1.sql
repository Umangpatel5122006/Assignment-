create database lab1;
use lab1;
create table employee(
Emp_no int primary key,
E_name varchar(55), 
E_address varchar(150), 
E_ph_no numeric(10,0), 
Dept_no int ,
Dept_name varchar(15),
Job_id varchar(30) , 
Salary numeric(8,2)
);




alter table employee
add column hiredate date;

alter table employee
modify Job_id varchar(2);

alter table employee
change Emp_no E_no int not null;

alter table employee
modify Job_id varchar(50);

select * from employee;


use lab1;
create table employee2(
empid varchar(10) primary key, 
empname varchar(20) not null,
gender varchar(7) not null, 
age tinyint(3) not null, 
dept varchar(15) references salary(dept),
dob date not null, 
doj date not null
);

create table salary (
empid varchar(10) references employee2(empid),
salary numeric(10,2)  primary key, 
dept varchar(15) not null, 
branch varchar(20) not null
);

create table branchtable (
branch varchar(20) primary key, 
city varchar(20) not null
);

alter table employee2
add column designation varchar(11);

alter table salary
drop column dept;

rename table employee2 to emp;
select * from emp;

truncate table branchtable ;
drop table branchtable;



drop table employee;
drop table emp;
drop table salary;
drop table employee2;