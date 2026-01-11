select
    t.request_at as Day,
    round(
        sum(case
                when t.status in ('cancelled_by_client', 'cancelled_by_driver')
                then 1 else 0
            end) / count(*),
        2
    ) as `Cancellation Rate`
from trips t
join users c
    on t.client_id = c.users_id
   and c.role = 'client'
   and c.banned = 'no'
join users d
    on t.driver_id = d.users_id
   and d.role = 'driver'
   and d.banned = 'no'
where t.request_at between '2013-10-01' and '2013-10-03'
group by t.request_at
order by t.request_at;
