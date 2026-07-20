# Write your MySQL query statement 
SELECT name,bonus from Employee e LEFT JOIN Bonus b ON e.empID = b.empID  WHERE (bonus < 1000 || bonus IS NULL);