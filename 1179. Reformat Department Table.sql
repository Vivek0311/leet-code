# Write your MySQL query statement below

select id, 
sum(case when lower(month)='jan' then revenue end) as Jan_Revenue,
sum(case when lower(month)='feb' then revenue end) as Feb_Revenue,
sum(case when lower(month)='mar' then revenue end) as Mar_Revenue,
sum(case when lower(month)='apr' then revenue end) as Apr_Revenue,
sum(case when lower(month)='may' then revenue end) as May_Revenue,
sum(case when lower(month)='jun' then revenue end) as Jun_Revenue,
sum(case when lower(month)='jul' then revenue end) as Jul_Revenue,
sum(case when lower(month)='aug' then revenue end) as Aug_Revenue,
sum(case when lower(month)='sep' then revenue end) as Sep_Revenue,
sum(case when lower(month)='oct' then revenue end) as Oct_Revenue,
sum(case when lower(month)='nov' then revenue end) as Nov_Revenue,
sum(case when lower(month)='dec' then revenue end) as Dec_Revenue
from Department
group by id;
