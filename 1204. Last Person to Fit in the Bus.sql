with rt_table as (
    select *, sum(weight) over(order by turn) as running_total
    from Queue
)
select person_name 
from rt_table
where running_total <= 1000
order by running_total desc 
limit 1;
