use TTS_10_30_SE;

create  table product(
pro_ID int primary key,
pro_name varchar(25),
pro_price int,
company_code int
);

 insert into product values
 (101,"Mother Board",3200.00,15),
 (102,"Key Board",450.00,16),
 (103,"ZIP Drive",250.00,14),
 (104,"Speaker",550.00,16),
 (105,"Monitor",5000.00,11),
 (106,"DVD Drive",900.00,12),
 (107,"CD drive",800.00,12),
 (108,"Printer",2600.00,13),
 (109,"Refill Cartridge",350.00,13),
 (110,"Mouse",250.00,12);
 
 select * from product;
 
 select * from product
 where pro_price>=250 
 order by pro_price desc;
select pro_price,pro_name from product
order by pro_name asc;


select pro_price,pro_name from product
where pro_price=(select min(pro_price) From product); 

select avg(pro_price),company_code from product
group by company_code;

select avg(pro_price) from product;


