select visited_on, amount, round(average_amount, 2) as average_amount
from (
    select visited_on, sum(t.amount) over(
        order by visited_on rows between 6 preceding and current row 
    ) as amount, avg(t.amount) over(
        order by visited_on rows between 6 preceding and current row 
    ) as average_amount
    from (
        select visited_on, sum(amount) as amount
        from Customer
        group by visited_on
    ) t
)x
where visited_on >= (
    select min(visited_on) + interval 6 day
    from Customer
)
