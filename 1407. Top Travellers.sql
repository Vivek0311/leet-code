# Write your MySQL query statement below

select u.name, coalesce(r.travelled_distance, 0) as travelled_distance
from Users u
left join (select user_id, sum(distance) as travelled_distance from Rides
group by user_id) r
on r.user_id = u.id
order by travelled_distance desc, name 
