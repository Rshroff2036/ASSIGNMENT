use TTS_10_30_SE;
-- ASSIGNMENT Q2
create table employee2(
employee_id int primary key,
first_name varchar(10),
last_name varchar(10),
salary int ,
joining_date varchar(50),
department text
);
create table incentive(
employee_ref_id int,
incentive_date varchar(10),
incentive_amount int,
 foreign key incentive(employee_ref_id) references employee2(employee_id)
);
drop table incentive;
insert into employee2 values
(1,"John","Abraham",1000000,"01-JAN-13 12.00.00 AM","Banking"),
(2,"Michael","Clarke",800000,"01-JAN-13 12.00.00 AM","Insurance"),
(3,"Roy","Thomas",700000,"01-FEB-13 12.00.00 AM","Banking"),
(4,"Tom","Jose",600000,"01-FEB-13 12.00.00 AM","Insurance"),
(5,"Jerry","Pinto",650000,"01-FEB-13 12.00.00 AM","Insurance"),
(6,"Philip","Mathew",750000,"01-JAN-13 12.00.00 AM","Services"),
(7,"Testname1","123",650000,"01-JAN-13 12.00.00 AM","Services"),
(8,"Testname2","123",600000,"01-FEB-13 12.00.00 AM","Insurance");
select * from employee2;
insert into incentive values
(1,"01-FEB-13",5000),
(2,"01-FEB-13",3000),
(3,"01-FEB-13",4000),
(4,"01-JAN-13",4500),
(5,"01-JAN-13",3500);
-- ASSIGNMENT Q3
select first_name as EMPLOYEE_NAME From employee2;

-- ASSIGNMENT Q4
select first_name,joining_date,salary from employee2;

-- ASSIGNMENT Q5
select * from employee2
order by first_name asc;
select * from employee2
order by salary desc;

-- ASSIGNMENT Q6
select * from employee2
Where first_name like"%j%";

-- ASSIGNMENT Q7 AND Q8
select department ,max(salary) as max_salary from employee2
group by department
order by max_salary;

-- ASSIGNMENT Q9
select e.first_name,i.incentive_amount from employee2 as e inner join incentive as i on e.employee_id=i.employee_ref_id
where incentive_amount>3000;

-- ASSIGNMENT Q10
create table view_table(
employee_id int primary key,
first_name varchar(10),
last_name varchar(10),
salary int 
);
create table copy_table(
employee_id int primary key,
first_name varchar(10),
last_name varchar(10),
salary int 
);
create trigger copy_table 
after insert on view_table for each row
insert into copy_table values
(new.employee_id,new.first_name,new.last_name,new.salary);

insert into view_table values
(101,"bhumit","shah",50001),
(102,"rahul","shroff",70001);

select * from copy_table;