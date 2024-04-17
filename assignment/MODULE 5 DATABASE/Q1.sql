use TTS_10_30_SE;
create table student1(
rollno int primary key,
name varchar(20),
branch varchar(20)
);

create table exam1(
rollno int ,
scode varchar(10),
marks int ,
pcode varchar(10),
 foreign key exam1(rollno) references student1(rollno)
);
Drop table exam1;
insert into student1 values
(1,"jay","computer science"),
(2,"suhani","electronic and com"),
(3,"kriti","electronic and com");

insert into exam1 values
(1,"CS11",50,"CS"),
(1,"CS12",60,"CS"),
(2,"EC101",66,"EC"),
(2,"EC102",70,"EC"),
(3,"EC101",45,"EC"),
(3,"EC102",50,"EC");
select s.rollno,s.name,s.branch,e.scode,e.marks,e.pcode from student1 as s left join exam1 as e on s.rollno=e.rollno
union
select s.rollno,s.name,s.branch,e.scode,e.marks,e.pcode from exam1 as e right join student1 as s on e.rollno=s.rollno; 
