select p.product_id, coalesce(p1.new_price, 10) as price
from (select distinct product_id from Products) p
left join
(
    select product_id, new_price, row_number() over(partition by product_id order by change_date desc) as rn 
    from Products
    where change_date <= '2019-08-16' 
) p1
on p.product_id = p1.product_id 
and p1.rn = 1;
