# Write your MySQL query statement below


select name, balance
from Users u
left join (select account, sum(amount) as balance from Transactions group by account having sum(amount) > 10000 ) t 
on t.account = u.account
where balance > 10000
