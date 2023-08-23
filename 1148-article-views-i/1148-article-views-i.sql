# Write your MySQL query statement below
SELECT DISTINCT AUTHOR_ID AS ID FROM VIEWS WHERE (author_id=viewer_id) ORDER BY AUTHOR_id ASC;