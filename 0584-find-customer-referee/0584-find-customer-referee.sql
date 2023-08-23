# Write your MySQL query statement below
SELECT NAME FROM CUSTOMER WHERE referee_id >2 OR referee_id IN (0,1) OR referee_id is null;