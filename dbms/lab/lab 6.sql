create database lab6;
use lab6;
create table book(
author varchar(50) ,
title varchar(50),
language varchar(50),
price int ,
publisher varchar(50),
yearofpublication numeric(4,0),
isbn varchar(20) primary key,
deptname varchar(20)
);
INSERT INTO book (author, title, language, price, publisher, yearofpublication, isbn, deptname) VALUES
('Chetan Bhagat', 'Five Point Someone', 'English', 350, 'Rupa Publications', 2004, '9788129104595', 'Literature'),
('Chetan Bhagat', '2 States', 'Malayalam', 370, 'Westland Books', 2009, '9788129115300', 'Literature'),

('Arundhati Roy', 'The God of Small Things', 'English', 470, 'IndiaInk', 1997, '9780679457312', 'Literature'),
('Arundhati Roy', 'Azadi: Freedom. Fascism. Fiction.', 'Hindi', 520, 'Penguin India', 2020, '9780670094004', 'Politics'),

('R.K. Narayan', 'Swami and Friends', 'English', 390, 'Indian Thought Publications', 1935, '9788185986005', 'Literature'),
('R.K. Narayan', 'The Guide', 'English', 410, 'Penguin India', 1958, '9780143039640', 'Literature'),

('Amish Tripathi', 'The Immortals of Meluha', 'Gujarati', 450, 'Westland Books', 2010, '9789380658742', 'Mythology'),
('Amish Tripathi', 'Raavan: Enemy of Aryavarta', 'English', 480, 'Westland Publications', 2019, '9789388754088', 'Mythology'),

('Sudha Murty', 'Wise and Otherwise', 'English', 320, 'Penguin India', 2002, '9780143062228', 'Literature'),
('Sudha Murty', 'The Day I Stopped Drinking Milk', 'English', 340, 'Penguin Books', 2012, '9780143418650', 'Literature'),

('Devdutt Pattanaik', 'Jaya: An Illustrated Retelling of the Mahabharata', 'English', 550, 'Penguin India', 2010, '9780143104256', 'Mythology'),
('Devdutt Pattanaik', 'Sita: An Illustrated Retelling of the Ramayana', 'bengali', 570, 'Aleph Book Company', 2013, '9789382277002', 'Mythology'),

('Kiran Desai', 'The Inheritance of Loss', 'English', 490, 'Penguin India', 2006, '9780143104195', 'Literature'),
('Kiran Desai', 'Hullabaloo in the Guava Orchard', 'tamil', 460, 'Random House India', 1998, '9780679456161', 'Literature'),
('Kiran Desai', 'The Namesake 2', 'Hindi', 480, 'Penguin India', 2003, '9781043034210', 'Literature'),
('Kiran Desai', 'The Namesake', 'Telugu', 540, 'Penguin India', 2003, '9780143034210', 'Literature'),

('Jhumpa Lahiri', 'Interpreter of Maladies', 'English', 520, 'HarperCollins India', 1999, '9788172235024', 'Literature'),


('Anand Neelakantan', 'Asura: Tale of the Vanquished', 'English', 490, 'Leadstart Publishing', 2012, '9789381576052', 'Mythology'),
('Anand Neelakantan', 'Ajaya: Roll of the Dice', 'Marathi', 510, 'Platinum Press', 2013, '9789381576038', 'Mythology')
;

drop table book;
select distinct author from book where author like "A%";
select title, author, language  from book;
select deptname,count(deptname) from book  group by deptname;
select * from book where price>500;
SELECT author, count(author) as 'no. of book publish' FROM book GROUP BY author HAVING COUNT(author) > 3;
select author,publisher,title from book where price>250 order by author;
select author,avg(price) from book  group by author;
select author,title,price as 'highest price' from book  where price=(select max(price)from book) ;

select author,title,price as 'least price' from book  where price=(select min(price)from book) ;
SELECT author, title, price as'Second highest price' FROM book ORDER BY price DESC LIMIT 1 OFFSET 1;

use lab2;
SELECT s_Name as "name containing a", Semester,COUNT(RollNo) as "count of
students semester wise"
FROM student
WHERE s_Name LIKE "%a%"
GROUP BY Semester;

