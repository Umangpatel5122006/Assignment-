create database lab6;
use lab6;
drop table Book;
create table Book(
	title varchar(10),
    author varchar(10),
    lang varchar(20),
    price numeric(5,2),
    bid numeric(3,0),
    publication varchar(15)
    );
insert into Book
(title,author, lang, price,bid,publication)
values
('Gitanjali', 'Tagore', 'Bengali', 299.00, 101, 'Macmillan'),
('Malgudi', 'Narayan', 'English', 350.50, 102, 'IndianInk'),
('TrainInd', 'Khushwan', 'English', 275.75, 103, 'Penguin'),
('GodSmall', 'Roy', 'English', 399.99, 104, 'IndiaPub'),
('MidnChil', 'Rushdie', 'English', 450.00, 105, 'Vintage'),
('WhiteTigr', 'Adiga', 'English', 320.00, 106, 'HarperInd'),
('Sarasvat', 'Jhaveri', 'Gujarati', 280.00, 107, 'Navbharat'),
('Manvini', 'KaviKalp', 'Gujarati', 260.50, 108, 'GujSahitya'),
('PonniSel', 'Kalki', 'Tamil', 340.00, 109, 'Vanathi'),
('Thiruvas', 'Manikkav', 'Tamil', 310.75, 110, 'TamilAcad');

select author,title,lang from Book order by lang;
select * from Book where price>500;
select author from Book group by publication having count(title)>=3;
select publication,title from Book where price>=250 order by author;
select author ,avg(price) from Book group by author;
SELECT author, title ,price as Price FROM Book order by price asc limit 1 ;
SELECT author, title ,price as Price FROM Book order by price desc limit 1 offset 1 ;
SELECT author, title ,price as Price FROM Book order by price asc limit 1 offset 1 ;
use lab2;
select EmpID from Employee where E_Name like "A%";
select Department,count(EmpID) from Employee group by Department;



use lab2;
select distinct Semester from Student where s_Name like "a%";
select distinct Semester,count(RollNo) from Student group by Semester;
select distinct Branch , s_Name from Student where RollNo=1;
select s_Name,Semester  from Student where HostelRoom is null;
select Semester, count(RollNo) as   'student after Augest' from Student  where month(DOB)=08 group by Semester;
select Rollno, s_Name, AdmissionDate from Student where AdmissionDate=(select min(AdmissionDate) from Student);
select avg(count(sc)) as 'avg student per sem.' from (select RollNo,count(*) as sc from Student group by Semester)as Semester_counts;