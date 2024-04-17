use TTS_10_30_SE;
create table salepeople(
salesman_id int primary key,
name text,
city text,
commission decimal(3,2)
);
insert into salepeople values
(5001,"james hoog","new york",0.15),
(5002,"nail knite","paris",0.13),
(5005,"pit alex","london",0.11),
(5006,"mc lyon","paris",0.14),
(5007,"paul adam","rome",0.13),
(5003,"lauson hen","sen jose",0.12);
select * from salepeople;

create table orders(
ord_no int primary key,
pur_amt float ,
ord_date varchar(25),
customer_id int,
salesman_id int,
foreign key orders(salesman_id) references salepeople(salesman_id)
);
insert into orders values
(70001,150.5,"2012-10-05",3005,5002),
(70009,270.65,"2012-09-10",3001,5005),
(70002,65.26,"2012-10-05",3002,5001),
(70004,110.5,"2012-08-17",3009,5003),
(70007,948.5,"2012-09-10",3005,5002),
(70005,2400.6,"2012-07-27",3007,5001),
(70008,5760,"2012-09-10",3002,5001),
(70010,1983.43,"2012-10-10",3004,5006),
(70003,2480.4,"2012-10-10",3009,5003),
(70012,250.45,"2012-06-27",3008,5002),
(70011,75.29,"2012-08-17",3003,5007),
(70013,3045.6,"2012-04-25",3002,5001);
select * from orders;

select s.salesman_id,s.name,o.ord_no,o.ord_date,o.pur_amt from orders as o
inner join salepeople as s on o.salesman_id=s.salesman_id
where o.salesman_id=5001;

-- assignment Q13
select* from orders
where pur_amt>1000; 