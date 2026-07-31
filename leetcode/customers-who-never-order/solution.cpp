# Write your MySQL query statement below
SELECT c.name as Customers
FROM Customers as c
INNER JOIN Orders as o ON c.id = o.customerId;
