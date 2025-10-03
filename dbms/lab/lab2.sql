create database lab2;
use lab2;
create table Student(
	RollNo int (6) primary key,
    s_Name Character (25), 
    Semester int (3), 
    DOB Date,
	AdmissionDate Date, 
    HostelRoom int (5)
);
insert into Student
(RollNo,s_Name, Semester, DOB ,
AdmissionDate , HostelRoom)
values
(121,"Jay",2,'2023-08-14','2024-08-14',365),
(170,"Sanjay",1,'2023-07-04','2024-08-09',482),
(113,"Vivek",3,'2013-08-14','2014-08-14',189),
(104,"Joy",4,'2010-04-04','2019-07-19',281),
(205,"Veer",5,'2010-08-14','2023-08-14',365),
(606,"Yug",7,'2009-07-04','2010-09-29',282),
(07,"Umang",8,'2013-12-05','2017-05-14',305),
(870,"Kavya",4,'2010-07-04','2019-07-19',981),
(199,"Harsh",3,'2021-09-24','2025-08-14',248),
(100,"Sedha",1,'2024-07-04','2025-08-09',360);

select * from Student;

select RollNo,s_Name from Student;

select * from Student
where Semester=4;

select * from Student
where RollNo between 100 and 200;

select * from Student
where DOB > 2001-1-1;

select * from Student
where HostelRoom between 200 and 299;

select * from Student
WHERE s_Name LIKE 'S%';

 drop table Student;
 
Create table Employee (
EmpID int (6),
E_Name Character (25), 
Department Character (30), 
ManagerID int (6) primary key, 
JoiningDate Date, 
Salary int (8)
);
 
INSERT INTO Employee 
(EmpID, E_Name, Department, ManagerID, JoiningDate, Salary) 
VALUES
(1, 'Amit Sharma', 'Engineering', 5001, '2020-03-15', 75000),
(12, 'Priya Desai', 'Marketing', 5002, '2019-07-22', 68000),
(100, 'Ravi Kumar', 'Finance', 5003, '2021-01-10', 72000),
(104, 'Sneha Joshi', 'Human Resources', 5004, '2018-11-05', 65000),
(005, 'Karan Mehta', 'HR', 5005, '2022-06-01', 80000),
(006, 'Neha Verma', 'Sales', 5006, '2020-09-30', 70000),
(124, 'Arjun Singh', 'IT Support', 5007, '2023-02-14', 60000),
(108, 'Divya Patel', 'Legal', 5008, '2017-04-18', 77000),
(029, 'Manish Rao', 'HR', 5009, '2021-12-01', 73000),
(101, 'Ritika Jain', 'Engineering', 5010, '2019-08-25', 79000);


select * from Employee;

select E_Name , Department from Employee;

select * from Employee
where Department='HR';

select * from Employee
where EmpId=124;

select * from Employee
where Salary between 50000 and 100000;

select * from Employee
where JoiningDate > '2020-1-1';

select * from Employee
where JoiningDate between '2020-1-1' and '2023-1-31';

drop table Employee;
drop table Student;