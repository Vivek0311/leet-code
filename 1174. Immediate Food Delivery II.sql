select round(sum(order_type = 'immediate') / count(order_type) * 100, 2) as immediate_percentage
from (   
    select case 
    when order_date = customer_pref_delivery_date then 'immediate'
    else 'scheduled' end as order_type
    from (
        select customer_id, order_date, customer_pref_delivery_date, row_number() over(partition by customer_id order by order_date) as rn
        from Delivery
    ) t
    where rn = 1
) x
