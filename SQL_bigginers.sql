create database database_j1;
use database_j1;
create table People(
	ID int unsigned  auto_increment primary key,
	Name varchar(511),
	City varchar(511),
	cell_number bigint,
	Age int
);

ALTER TABLE People AUTO_INCREMENT=212126000; # Configurar el inicio en 1001

drop table People;
select ID, Name, City from People;

insert into People (Name, City, cell_number, Age) values  ('Ana','Barbosa','3124543247',22),
 ('Tommy','Bucaramanga','3124543247',17),('Yerry','Barbosa','3124543247',16),
('Lucas','Socorro','3124543247',18),('Bob','Malaga','3124543247',32),('Tom','Barranca','3124543247',34);

select * from People where city = "Barbosa";
select * from People where Age >10 and Age < 30;
select * from People where Age between 20 and 30;
select * from People order by City asc , Name desc ;

ALTER TABLE People add COVID_vaccined varchar(55) ;

SET SQL_SAFE_UPDATES = 0; #change to 1 - > 0 / safe mode 1 / unsafe mode 0
UPDATE People SET cell_number =  3013333555 WHERE Name  = "Bob";
SET SQL_SAFE_UPDATES = 1; #change to 1 - > 0

delete from People where ID = 212126004;
UPDATE People SET COVID =  "yes" WHERE Age > 30 and ID <>0;
select * from New_Age;
SELECT Age*2  AS New_Age FROM People;

create table People_Vaciinated(
	ID int unsigned  auto_increment primary key,
	Name varchar(511),
	vaccinated varchar(25)
);

ALTER TABLE People_Vaciinated AUTO_INCREMENT=212126000; # Configurar el inicio en 1001
insert into People_Vaciinated (Name, vaccinated) values  ('Ana',"Yes"),
 ('Tommy',"No"),('Yerry',"No"), ('Lucas',"Si"),('Bob','Si'),('Tom',"si");
 
UPDATE People, People_Vaciinated  SET People.COVID_vaccined = People_Vaciinated.vaccinated
where People.ID = People_Vaciinated.ID;

select * from People_Vaciinated

