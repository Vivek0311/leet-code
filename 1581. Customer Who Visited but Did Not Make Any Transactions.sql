# Write your MySQL query statement below

select v.customer_id, count(v.customer_id) as count_no_trans
from Visits v
left join (select visit_id, sum(amount) from Transactions group by visit_id) t 
on v.visit_id = t.visit_id
where t.visit_id is null
group by v.customer_id;
