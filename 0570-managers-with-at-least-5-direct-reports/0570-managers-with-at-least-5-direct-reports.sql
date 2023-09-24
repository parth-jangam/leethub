# Write your MySQL query statement below
SELECT name FROM EMPLOYEE WHERE id IN(SELECT managerId FROM EMPLOYEE GROUP BY ManagerId
HAVING count(Id) >= 5);