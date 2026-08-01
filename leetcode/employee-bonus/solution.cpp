# Write your MySQL query statement below
SELECT e.name , b.bonus
FROM Employee as e
LEFT JOIN Bonus as b ON e.empID = b.empID
WHERE e.salary < 1000 AND b.bonus IS NULL ;