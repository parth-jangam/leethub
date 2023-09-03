# Write your MySQL query statement below
SELECT W1.ID FROM WEATHER W1,WEATHER W2 WHERE (W1.TEMPERATURE>W2.TEMPERATURE AND DATEDIFF(W1.RECORDDATE,W2.RECORDDATE)=1);  

# select w1.id
# from Weather w1, Weather w2
# where (w1.Temperature > w2.Temperature and 
# 	datediff(w1.recordDate, w2.recordDate) = 1)