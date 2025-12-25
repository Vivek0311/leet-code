select id as Id from (
    select id, temperature, recordDate, lag(temperature) over(order by recordDate) as previous_temp,
    lag(recordDate) over(order by recordDate) as prev_date from Weather
) t
where temperature > previous_temp and 
datediff(recordDate, prev_date) = 1;
