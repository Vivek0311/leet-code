select t.season, t.category, t.total_quantity, t.total_revenue
from (
    select s.season, p.category, sum(quantity) as total_quantity, sum(quantity * price) as total_revenue, row_number() over(partition by s.season order by sum(s.quantity) desc, sum(s.quantity * price) desc, p.category asc) as rn
    from (
        select *, case 
            when month(sale_date) in (9, 10, 11) then 'Fall'  
            when month(sale_date) in (3, 4, 5) then 'Spring'
            when month(sale_date) in (6, 7, 8) then 'Summer'
            when month(sale_date) in (12, 1, 2) then 'Winter'   
        end as season
        from sales
    ) s
    left join products p
    on s.product_id = p.product_id
    group by s.season, p.category
    order by s.season
) t
where rn = 1;
