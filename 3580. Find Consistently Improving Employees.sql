with bottom_3rows as (
    select t.employee_id, t.review_date, t.rating 
    from (
        select 
            employee_id, review_date, rating,
            row_number() over(partition by employee_id order by review_date desc) as rn
        from performance_reviews
    ) t
    where rn <= 3
), 
get_lag as (
    select employee_id, review_date, rating, lag(rating) over (partition by employee_id order by review_date) as prev_rating
    from bottom_3rows
)

select t.employee_id, e.name as name, t.improvement_score
from (
    select employee_id, max(rating) - min(rating) as improvement_score
    from get_lag
    group by employee_id
    having count(*) = 3 and sum(case when prev_rating is null then 1
    when rating > prev_rating then 1 else 0 end) = 3
) t
join employees e
on t.employee_id = e.employee_id
order by t.improvement_score desc, e.name asc;
