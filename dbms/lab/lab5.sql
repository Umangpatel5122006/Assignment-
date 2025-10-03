create database lab5;
use lab2;
select * from Employee where E_Name like "A%";
ALTER table Employee drop column City;
alter table Employee add column City varchar(26);
UPDATE Employee SET City = 'Palanpur' WHERE EmpId = 1;
UPDATE Employee SET City = 'Delhi' WHERE EmpId = 12;
UPDATE Employee SET City = 'Mumbai' WHERE EmpId = 100;
UPDATE Employee SET City = 'Kolkata' WHERE EmpId = 104;
UPDATE Employee SET City = 'Madhyapradesh' WHERE EmpId = 005;
UPDATE Employee SET City = 'Hyderabad' WHERE EmpId = 006;
UPDATE Employee SET City = 'Surat' WHERE EmpId = 124;
UPDATE Employee SET City = 'Jaipur' WHERE EmpId = 108;
UPDATE Employee SET City = 'Pune' WHERE EmpId = 029;
UPDATE Employee SET City = 'Bengaluru' WHERE EmpId = 101;

set SQL_SAFE_UPDATES=0;
 
 select * from Employee where City like "M%";
 select * from Employee where E_Name like "_____";
select * from Employee where City like "_____";
select * from Employee where E_Name like "%man%";


use lab2;
select * from Student where s_Name like "N%";

alter table Student add column Branch varchar(26);
UPDATE Student SET Branch = 'Information Technology' WHERE RollNo = 121;
UPDATE Student SET Branch = 'Mechanical' WHERE RollNo = 170;
UPDATE Student SET Branch = 'Electrical' WHERE RollNo = 113;
UPDATE Student SET Branch = 'Computer Science' WHERE RollNo = 104;
UPDATE Student SET Branch = 'Civil' WHERE RollNo = 205;
UPDATE Student SET Branch = 'Electronics' WHERE RollNo = 606;
UPDATE Student SET Branch = ' Artificial Intelligence' WHERE RollNo = 07;
UPDATE Student SET Branch = 'Chemical' WHERE RollNo = 870;
UPDATE Student SET Branch = 'Biomedical' WHERE RollNo = 199;
UPDATE Student SET Branch = 'Aerospace' WHERE RollNo = 100;

select * from Student where Branch like "A%";

select * from Student where s_Name like "_____";

alter table Student add column City varchar(26);
UPDATE Student SET City = 'Palanpur' WHERE RollNo = 121;
UPDATE Student SET City = 'Delhi' WHERE RollNo = 170;
UPDATE Student SET City = 'Mumbai' WHERE RollNo = 113;
UPDATE Student SET City = 'Kolkata' WHERE RollNo = 104;
UPDATE Student SET City = 'Madhyapradesh' WHERE RollNo = 205;
UPDATE Student SET City = 'Hyderabad' WHERE RollNo = 606;
UPDATE Student SET City = 'Surat' WHERE RollNo = 07;
UPDATE Student SET City = 'Jaipur' WHERE RollNo = 870;
UPDATE Student SET City = 'Pune' WHERE RollNo = 199;
UPDATE Student SET City = 'Bengaluru' WHERE RollNo = 100;

select * from Student where s_Name like "%sh%";
use lab5;
create table Customers(
	CustomerID varchar(50) primary key, 
    CustomerName varchar(65),
	ContactNo int(10), 
    Address text (100), 
    City varchar(19), 
    PostalCode int(6), 
    Country varchar (10)
);
INSERT INTO Customers
(CustomerID, CustomerName, ContactNo, Address, City, PostalCode, Country)
VALUES
(1, 'Amit Sharma', 1545145178,'12 Industrial Area', 'Delhi', '110001', 'India'),
(2, 'Priya Mehta', 1545145151,'45 Garden Street', 'Mumbai', '400002', 'India'),
(3, 'Rimsat Verma', 1545121451,'88 Tower Road', 'Bengaluru', '560001', 'India'),
(4, 'Neha Patel', 1577145178,'23 Marine Drive', 'Surat', '395003', 'India'),
(5, 'Karan Singh', 9997145178,'101 Market Lane', 'Kolkata', '700001', 'India'),
(6, 'Umangbhai patel', 1500005178,'101 Market Lane', 'Madhya Pradesh', '700801', 'India')
;

select * from Customers where CustomerName like "%bhai";

select * from Customers where CustomerName like "%sat%";
select * from Customers where City like "%Pradesh";
select * from Customers where City like "s__at";
select * from Customers where City ="Mumbai";


