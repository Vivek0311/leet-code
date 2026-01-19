select 
    t1.product1_id, 
    t1.product2_id, 
    pi1.category as product1_category,
    pi2.category as product2_category,
    t1.customer_count
from (
    select p1.user_id, p1.product_id as product1_id, p2.product_id as product2_id, count(distinct p1.user_id) as customer_count
    from ProductPurchases p1
    join ProductPurchases p2
    on p1.user_id = p2.user_id 
    and p1.product_id < p2.product_id
    group by p1.product_id, p2.product_id
) t1
join 
    ProductInfo pi1
on 
    t1.product1_id = pi1.product_id
join 
    ProductInfo pi2
on 
    t1.product2_id = pi2.product_id
where 
    t1.customer_count >= 3
order by 
    t1.customer_count desc, 
    pi1.product_id asc,
    pi2.product_id asc;
