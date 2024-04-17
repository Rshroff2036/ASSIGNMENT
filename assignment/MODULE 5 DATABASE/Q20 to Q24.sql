use TTS_10_30_SE;
create  table item_mast(
pro_ID int primary key,
pro_name varchar(25),
pro_price int,
company_code int
);
 insert into item_mast values
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
 
 select * from item_mast;
 -- ASSIGNMENT Q20
 select * from item_mast
 where Price_IN_RS between 200 and 600;
 
 -- ASSIGNMENT Q21
select avg(Price_IN_RS) from Item_mast
where company_code=16 ;
    
 -- ASSIGNMENT Q22
 alter table item_mast rename column pro_name to Item_Name;
 alter table item_mast rename column pro_price to Price_IN_RS;
 
 -- ASSIGNMENT Q23
select * from Item_mast
where Price_IN_RS>=250;
select * from Item_mast
order by Price_IN_RS desc;
select * from Item_mast
order by Item_Name asc;

-- ASSIGNMENT Q24
select company_code,avg(Price_IN_RS) from item_mast
group by company_code;


 
