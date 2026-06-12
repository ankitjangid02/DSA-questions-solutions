-- create database student 
create database student;

-- Select student database 
use Student;

-- create table stud_info 
create table stud_info(Roll int, Name varchar(20), Age int, City varchar(10));

-- insert values in stud_info table
insert into stud_info values(1,'Gaurav',22,'Nashik');
insert into stud_info values(2,'Vijay',22,'Mumbai');
insert into stud_info values(3,'Tushar',34,'Pune');
insert into stud_info values(4,'Rahul',26,'Delhi');
insert into stud_info values(5,'Ajay',19,'Nashik');
insert into stud_info values(6,'Kunal',20,'Pune');


-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
-- print all information from stud_info table
select * from stud_info;

-- print roll and name from stud_info table
select Roll, Name from stud_info;

-- print roll=4 from stud_info table
select * from stud_info where Roll=4;
 
-- print name of student whose city is Nashik
 select name from stud_info where City='Nashik';

-- print name of student whose city is Mumbai and Pune
 select * from stud_info where City='Mumbai' or City='Pune';

-- print roll and name whose roll<5 from stud_info table
select Roll, Name from stud_info where Roll<5;
   
-- print city whose name is Ajay from stud_info table
select City from stud_info where Name='Ajay';

-- print roll is even from stud_info table
select * from stud_info where Roll%2=0;

-- print roll is odd from stud_info table
select * from stud_info where Roll%2!=0;

-- print all info of student whose roll is greater than 2 from stud_info table
select * from stud_info where Roll>2 and Name!='Rahul';

-- print all info of student whose city is Nashik and Roll less than 5 from stud_info table
select * from stud_info where City='Nashik' and Roll<5;
-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --


-- order by
-- asc
select * from stud_info order by name asc;
select * from stud_info order by name; -- by default order is ascending
select * from stud_info order by roll;
-- desc
select * from stud_info order by name desc;


-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
-- print city is nashik in ascending order by name from stud_info
select * from stud_info where City='Nashik' order by name;

-- print name,city in ascending
select * from stud_info order by Name, City;

-- print name asc, city desc
select * from stud_info order by Name asc, City desc;
-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
 

-- distinct(remove repitation)
select distinct City from stud_info;

select distinct City from stud_info order by City;

-- update
update stud_info set name='Ram' where Roll=2;
select * from stud_info;

update stud_info set name='Ankit', City='Rawatbhata' where Roll=3;
select * from stud_info;

-- delete
delete from stud_info where Roll=6;
select * from stud_info;

-- in
select * from stud_info where Roll=1 or Roll=3 or Roll=4; -- for selecting 1,3,4 roll
select * from stud_info where Roll in(1,3,4);
-- not in
select * from stud_info where Roll not in(1,3,4);

-- between
select * from stud_info where Age between 21 and 25;
select * from stud_info where Name between 'a' and 's';
select * from stud_info where Name between 'a' and 'b';
-- not between
select * from stud_info where Age not between 21 and 25;

-- like
select * from stud_info where Name like 'r%';
select * from stud_info where Name like '%y';
select * from stud_info where Name like '_a%';
select * from stud_info where Name like '%a_';
select * from stud_info where Name like '%u%';

-- regular expression
-- create table stud
create table stud(Roll int, Name varchar(20), City varchar(10));
-- insert values in stud table
insert into stud values(1,'Gaurav Chaudhari','Mumbai');
insert into stud values(2,'Vijay Mallya','Nashik');
insert into stud values(3,'Vinayak Mali','Pune');
insert into stud values(4,'Ganesh Bodake','Nashik');
insert into stud values(5,'Ashok Patil','Mumbai');
select * from stud;
-- using regular expression 
select * from stud where Name regexp 'Patil|Mali';	-- Having Patil or Mali
select * from stud where Name regexp 'Patil|Ma';	-- Having Patil or Ma
select * from stud where Name regexp '^Vi';		-- starting with Vi
select * from stud where Name regexp 'ya$';		-- end with ya
select * from stud where Name regexp '^Ganesh|sho|ya$'; -- Start with Ganesh or having sho or end with ya
select * from stud where Name regexp '[ag]';	-- having a or g
-- or
select * from stud where Name regexp 'a|g';		-- having a or g
select * from stud where Name regexp 'dh|sh';	-- having dh or sh
select * from stud where Name regexp '[ds]h';	-- having dh or sh because h is common for both so it become dh or sh
select * from stud where Name regexp '[il]$';	-- end with i or l
select * from stud where Name regexp '^[a]k';	-- starting with a and second letter have k
select * from stud where Name regexp '[g-k]';	-- having g h i j k(from g to k)
select * from stud where Name regexp '[a-d]';	-- having a b c d(from a to d)

-- limit
select * from stud limit 3;
-- limit offset
select * from stud limit 1,2;	-- 1 is offset and 2 is 2 data

-- commit & rollback
select * from stud_info;
update stud_info set name='Jay' where roll=2;
commit;		-- save 
update stud_info set name='Jay2' where roll=2;
update stud_info set name='Jay3' where roll=2;
update stud_info set name='Jay4' where roll=2;
update stud_info set name='Jay5' where roll=2;
rollback;	-- undo till previous commmit

-- constraints
#NOT NULL
create table stud1(Roll int, Name varchar(20));
insert into stud1 values(1,'Ram');
insert into stud1(name) values ('Kunal');
insert into stud1(roll) values(2);
select * from stud1;

create table stud3(Roll int not null, Name varchar(20));
insert into stud3 values(1,'Ram');
insert into stud3(name) values ('Kunal');	-- roll = 0
insert into stud3(roll) values(2);	-- name = null
select * from stud3;

create table stud2(Roll int not null, Name varchar(20) not null);
insert into stud2 values(1,'Ram');
insert into stud2(name) values ('Kunal');	-- roll = 0
insert into stud2(roll) values(2);	-- name = blank
select * from stud2;

#UNIQUE
create table stud4(Roll int unique, Name varchar(20));
insert into stud4 values(2,'Ram');
insert into stud4 values (2,'Kunal');	-- Error because of unique constraint
select * from stud4;

#DEFAULT
create table stud5(Roll int, City varchar(20)  default 'Mumbai');
insert into stud5 values(1,'Pune');
insert into stud5(Roll) values (2);	-- City is Mumbai by default
select * from stud5;

#CHECK
create table stud6(Roll int, Name varchar(20), Age int check(Age>18));
insert into stud6 values(1,'Ram',20);
insert into stud6 values (2,'Ajay',15);	-- Error because of Age<18 constraint
select * from stud6;

#PRIMARY KEY
-- primary key always have unique data
-- primary key cannot have null values
-- A table can contain only one primary key column.   
create table sport(gid int primary key, Name varchar(20), Coach varchar(20), Fees int);
insert into sport values(1,'Cricket','Patil Sir',5000);
insert into sport values(2,'Football','Mali Sir',3000);
insert into sport values(3,'Tennis','Patil Sir',5000);
select * from sport;

create table student(Roll int, Name varchar(20), City varchar(20), per int, Age int, fk_sid int, 
	foreign key(fk_sid) references sport(gid));
insert into student values(1,'Gaurav','nsk',80,30,1);
insert into student values(2,'Tejas','Shrp',70,20,2);
insert into student values(3,'Manas','nsk',90,20,1);
insert into student values(4,'Lokesh','Shrp',60,21,3);
insert into student values(5,'Nikhil','indr',35,25,2);
insert into student values(6,'Ankit','Mumbai',75,29,3);
insert into student values(7,'Soham','Paki',80,27,2);
select * from student;


-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
-- print name, city, per of student whose play cricket
select student.name, student.city, student.per from sport, student where sport.name='Cricket' and gid=fk_sid;

-- print coach name of student whose percentage is less than 60
select coach from student, sport where student.per<60 and gid=fk_sid;

-- update coach name, set name = 'Vijay' where student roll is 4
update sport,student set coach='Vijay' where Roll=4 and gid=fk_sid;
select * from sport;

-- print roll, name, city and age of the student who play cricket but student city is not=pune
select roll, student.name, student.city, student.age from sport, student where sport.name='Cricket' and City!='Pune' and gid=fk_sid;

-- print roll, name, city and age of student in descending order of name whose play cricket but student city is not equal to pune
select roll, student.name, city, age from sport, student where sport.name='Cricket' and City!='Pune' and gid=fk_sid order by student.name desc;

-- print student who play cricket and age>20
select student.name from sport, student where sport.name='Cricket' and age>20 and gid=fk_sid;

-- print name of student whose sport fees is 5000
select student.name from sport, student where fees=5000 and gid=fk_sid;

-- print student whose age is less than 20 and play tennis
select * from sport, student where age<20 and sport.name='Tennis' and gid=fk_sid;

-- print highest percentage of the student with sport name
select student.name, per, sport.name from sport,student where per=(select max(per) from student) and gid=fk_sid;

-- print count student whose play cricket
select count(student.name) from sport, student where sport.name='Cricket' and gid=fk_sid;

-- print student whose sport fees is minimum
select student.name, fees from student,sport where fees=(select min(fees) from sport) and gid=fk_sid;

-- print student whose sport fees between 3000 and 5000
select student.name, fees from sport, student where fees between 3000 and 5000 and gid=fk_sid;

-- print student whose coach is Vijay 
select * from sport, student where coach='Vijay'and gid=fk_sid;
-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --


#ON DELETE CASCADE and ON UPDATE CASCADE
create table Department(dept_id int primary key, dept_name varchar(20));
insert into Department values(1,'Computer');
insert into Department values(2,'Mechanical');
insert into Department values(3,'Civil');
insert into Department values(4,'IT');
select * from Department;

-- adding ON DELETE and ON UPDATE CASCADE in thhe table
create table Student1(stud_id int primary key, stud_name varchar(20), dept_id int, 
foreign key(dept_id) references Department(dept_id) on delete cascade on update cascade);
insert into Student1 values(101,'Amit',1);
insert into Student1 values(102,'Priya',1);
insert into Student1 values(103,'Rohan',2);
insert into Student1 values(104,'Sneha',2);
insert into Student1 values(105,'Neha',3);
select * from Student1;

select * from student1 as s, department as d where s.dept_id=d.dept_id;

delete from department where dept_id=2;	-- delete dept_id=2 and its child tables dept_id=2 also got deleted

update department set dept_id=2 where dept_id=3;	-- update dept_id=2 where dept_id=3
													-- and its child tables dept_id=3 become dept_id=2
                                         
                                         
-- Joins
create table student3(student_id int, name varchar(20), course_id int);
insert into student3 values(101,'Amit',1);
insert into student3 values(102,'Neha',2);
insert into student3 values(103,'Rahul',3);
insert into student3 values(104,'Pooja',4);
insert into student3 values(104,'Vivek',1);
select * from student3;

create table course(course_id int, course_name varchar(20));
insert into course values(5,'C++');
insert into course values(1,'SQL');
insert into course values(2,'Python');
insert into course values(3,'Java');
select * from course;


-- join
select name, course_name from student3 inner join course on student3.course_id=course.course_id;	-- joined student3 and course

-- left join
select * from student3 left join course on student3.course_id=course.course_id;

-- right join
select * from student3 right join course on student3.course_id=course.course_id; 

-- full join 
-- mySQL does support full support
select name, course_name from student3 full join course on student3.course_id=course.course_id;	-- Error

-- union all 
select * from student3 left join course on student3.course_id=course.course_id 
union all 
select * from student3 right join course on student3.course_id=course.course_id;

-- union
select * from student3 left join course on student3.course_id=course.course_id 
union 
select * from student3 right join course on student3.course_id=course.course_id;

-- self join
create table Employee(emp_id int primary key, name varchar(20), manager_id int);
insert into Employee values(1,'Amit', NULL);
insert into Employee values(2,'Neha', 1);
insert into Employee values(3,'Raj', 1);
insert into Employee values(4,'Riya', 2);
select * from Employee;

select e.emp_id, e.name as Employee, m.name as Manager from Employee e left join Employee m on e.manager_id=m.emp_id;


-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
-- student enroll in python
select name from student3 join course on student3.course_id=course.course_id where course_name='Python';	

-- show course_name and name and name starts with R
select name,course_name from student3 join course on student3.course_id=course.course_id where Name like 'R%';	

-- student learning java
select name from student3 join course on student3.course_id=course.course_id where course_name='Java';

-- display course wise student count;
select course_name, count(name) from student3 join course on student3.course_id=course.course_id group by course_name;

-- show only student without course
select name from student3 left join course on student3.course_id=course.course_id where course_name is null;

-- count total student including unmatched
select count(name) from student3;

-- show student and replace null with 'not assigned'
select name, ifnull(course_name,'not assigned') from student3 left join course on student3.course_id=course.course_id;

-- count student who have course and who dont
select count(course.course_id) as with_course, count(*)-count(course.course_id) from student3 left join course on student3.course_id=course.course_id;

-- show student name without matching(using Right join)
select course_name, name from student3 right join course on student3.course_id=course.course_id where student_id is null;

-- count how many employees under each manager
select count(*) as count,m.name from employee e left join employee m on e.manager_id=m.emp_id where m.name is not null group by m.name ;
-- -- -- -- -- -- -- -- -- -- -- -- -- -- --


-- if
create table student4(Roll int, Name varchar(20), percentage int);
insert into student4 values 
(1,'Ankit Daddy', 95), 
(2,'Ujjwal Chachu', 60),
(6, 'XYZ', 32),
(3, 'Vivek Beta', 41),
(4,'Yash',2),
(5, 'Anubhav', 44),
(7,'Jane',40);
select *, if(percentage>40,"pass","fail") as result from student4;

select *,
case 
when percentage>=0 and percentage<=40 then "Fail"
when percentage>=40 and percentage<=50 then "Partial Pass"
when percentage>=51 and percentage<=100 then "Pass"
end as 
result from student4;


--  stored procedurer
-- A student Procedurer is a saved SQL program stored in the Database

select * from Stud_info;

-- stored procedure, Triger, Function
-- create procedure show_Student()
-- begin
-- 	select * from Stud_info;
-- end;

-- show_Student();
use Student;

delimiter // 
create procedure show_table()
begin
	select * from Stud_info;
	select * from course;
end; //
delimiter ;

call show_table();

show procedure status where DB='Student';

-- student_report
-- nashik
-- mumbai
-- student count
-- Roll=1
use Student;

delimiter //
create procedure student_report1()
begin
	select * from stud_info where City='Nashik';
    select * from stud_info where City='Mumbai';
    select count(*) from stud_info;
    select * from stud_info where roll=1;
end //
delimiter ;
call student_report1();

-- find second highest roll number of student
-- only those cities where more than 1 student exists

delimiter //
create procedure student_report2()
begin
	select max(roll) from stud_info where roll!=(select max(roll) from stud_info);
    select city,count(*) from stud_info group by city having count(*)>1;
end //
delimiter ;
call student_report2();

select roll from student order by roll desc limit 1,1;	-- second highest

delimiter //
create procedure city_student(in cityname varchar(20))
begin
	select * from stud_info where city=cityname;
end //
delimiter ;

call city_student('Nashik');


--  Arithmetic function
select rand();	-- 0 to 1
select rand()*10;	-- 0 to 10
select round(rand()*10);	-- 0 to 10 in whole number
select round(10.49);	-- round off function so it become 10
select round(10.5);	-- 11
select round(pi());	-- 3
select round(pi(),2);	-- 3.14
select ceil(3.2);	-- upper bound=4
select floor(3.8);	-- lower bound=3
select ceil(-4.3);	-- upper bound=-4
select floor(-4.3);	-- lower bound=-5
select pow(2,3);	-- 3 power of 2=8 
select sqrt(4);	-- square root=2
select format(88.3215,2);	-- 88.32 

-- string functions
select length("Hello123");	-- 8
select char_length("Hello123");	-- 8
select character_length("Hello123");	-- 8
select upper("hello");	-- HELLO
select ucase('hello');	-- HELLO
select upper(city) from stud_info;	-- All city names are in Upper Case
select concat("Hello","Hii");	-- HelloHii
select position('u' in "Gaurav");	-- 3
select position('ur' in "Gaurav");	-- 3
select concat_ws('-','Hello','Gaurav','How','Are','You');	-- Hello-Gaurav-How-Are-You
select repeat('Hello',3);	-- HelloHelloHello
select chr(65);	-- A
select ascii('A');	-- 65
select reverse('Hello');	-- olleH
select substr('HelloStudent',2,3);	-- ell
select substr('Hello Student',2);	-- ello Student
select trim('	Hello 	a');		-- 	Hello a remove white spaces # not working properly in mySQL 	
select ltrim('	Hello 	a	');		-- remove left white spaces
select rtrim('	Hello 	a	');		-- remove right white spaces
select substring_index('Hello Student','o',1);	-- Hell
select substring_index('Hello Student','S',1);	-- Hello
select left('Hello Student',3);	-- Hel
select right('Hello Student',3);	-- ent
select replace('Hello Student How are you', 'How', 'Where');	-- Hello Student Where are you
select strcmp('Hello','Hello');	-- 0
select strcmp('Hello1','Hello');	-- 1
select strcmp('Hello','Hello1');	-- -1
select lpad('Hello',10,'#');	-- #####Hello
select lpad(123,5,0);	-- 00123
select rpad(123,5,0);	-- 12300

-- Date function
select current_date();	-- 2026-03-04
select sysdate();	-- 2026-03-04 11:45:32
select now();	-- 2026-03-04 11:45:45
select date('2026-03-04 11:45:25');	-- 2026-03-04
select month('2026-03-04');	-- 3
select monthname('2026-03-04');	-- March
select year('2026-03-04');	-- 2026
select quarter('2026-03-04');	-- 1
select day('2026-03-04');	-- 4
select dayname('2026-03-04');	-- Wednesday
select dayofweek('2026-03-04');	-- 4
select dayofyear('2026-03-04');	-- 63
select adddate('2026-03-04', interval 5 day);	-- 2026-03-09
select adddate('2026-03-04', interval 5 week);	-- 2026-04-08
select adddate('2026-03-04', interval 5 year);	-- 2031-03-04
select month(adddate('2026-03-04', interval 30 day));	-- 4


-- procedure
delimiter //
create procedure fun()
begin

end //
delimiter ;

-- trigger 
delimiter //
create trigger t1
before insert on student
for each row
begin 
	
end //
delimiter ;


-- new->insert
-- delete->old
-- new/old->update

-- before insert
-- after insert
-- before delete
-- after delete
-- before update
-- after update

-- same table->before
-- different table->after

create table student5(Roll int, Name varchar(20), password varchar(20));
insert into student5 values(1,'Amit','pass@123');
insert into student5(roll,password) values(2,'user@123');
select * from student5;

delimiter //
create trigger setUserName
before insert on student5
for each row
begin
	if new.Name is null or new.name='' then 
    set new.Name=concat('user_',new.Roll);
    end if;
end //
delimiter ;

insert into student5(roll, password) values(4,'1234');
select * from student5;


-- eg1
create table marks(roll int, m1 int, m2 int, m3 int, total int, avg int);

delimiter //
create trigger avgMarks
before insert on marks
for each row
begin
	set new.total=new.m1+new.m2+new.m3;
    set new.avg=new.total/3;
end //
delimiter ;

insert into marks(roll,m1,m2,m3) values(1,60,70,80);
insert into marks(roll,m1,m2,m3) values(2,70,80,90);
insert into marks(roll,m1,m2,m3) values(3,80,90,100);

select * from marks;

-- id city name then user_logged(id, action) its time date
create table t1(id int, name varchar(20), city varchar(20));
create table user_logged(id int, action varchar(20), loggedTime timestamp default current_timestamp);
drop trigger timeLogIn;

delimiter //
create trigger timeLogIn
after insert on t1
for each row
begin
	insert into user_logged values(new.id,'user created',now());
end //
delimiter ;

insert into t1 values(3,'Rahul','Mumbai');
insert into t1 values(4,'Ujjwal','RBT');
select * from user_logged;


-- update totalCountUpdate
create table t2(roll int, name varchar(20), totalCountUpdate int default 0);
insert into t2(roll, name) values(1,'Rahul');
delimiter //
create trigger updateCount
before update on t2
for each row
begin
	-- if old.totalCountUpdate is null then
--     set new.totalCountUpdate=0;
--     else
	set new.totalCountUpdate=old.totalCountUpdate+1;
--     end if;

end //
delimiter ;
select * from t2;

update t2 set name='Raj'where roll=1;


create table emp(id int,name varchar(20),salary int);
create table emp2(id int,old_salary int ,new_salary int);
insert into emp values(1,'Rahul',25000);
insert into emp values(2,'R',26000);
select * from emp;
delimiter //
create trigger old_sal
after update on emp
for each row
begin
	insert into emp2 values(old.id, old.salary, new.salary);
end //
delimiter ;
update emp set id=3 where id=1;
select * from emp2;
select * from emp;


create table emp3(id int,name varchar(20),salary int);
create table emp4(id int,name varchar(20),salary int);
insert into emp3 values(1,'Rahul',25000);
insert into emp3 values(2,'R',26000);
select * from emp3;
delimiter //
create trigger old_del
after delete on emp3
for each row
begin
	insert into emp4 values(old.id, old.name, old.salary);
end //
delimiter ;
delete from emp3 where id=1;
select * from emp4;