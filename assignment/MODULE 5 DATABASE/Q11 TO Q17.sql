use TTS_10_30_SE;
create table salesperson (
sno int primary key,
sname varchar(20),
city varchar(20),
comm decimal(2,2)
);

insert into salesperson values
(1001,"peel","london",.12),
(1002,"serres","san jose",.13),
(1004,"motika","london",.11),
(1007,"rafkin","barcelona",.15),
(1003,"axelrod","new york",.1);
select * from salesperson;
create table customer(
cnm  int ,
cname varchar(20),
city text,
rating int ,
sno int,
foreign key customer(sno) references salesperson(sno)
);
insert into customer values
(201,"hoffman","london",100,1001),
(202,"glovanne","roe",200,1003),
(203,"liu","san jose",300,1002),
(204,"grass","barcelona",100,1002),
(206,"clemens","london",300,1007),
(207,"pereira","roe",100,1004);
 drop table customer;
select * from customer;

-- assignment Q14
select sname,city="london" from salesperson
where comm >=0.12;

-- assignment Q15
select sname,city from salesperson
where city="london" or city = "barcelona";

-- assignment Q16
select sname,comm from salesperson
where comm >0.10 and comm<0.12;

-- assignment Q17
select cnm,rating,city from customer
where rating>100 or city="roe";