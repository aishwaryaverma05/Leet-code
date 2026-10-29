# Write your MySQL query statement below
SELECT e.name,b.bonus from Employee e
LEft join Bonus b On e.empId=b.empID WHERE bonus<1000 OR bonus is NULL;
