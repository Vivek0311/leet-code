select c.category, count(t.account_id) as accounts_count 
from (
    select 'Low Salary' as category
    union all 
    select 'Average Salary'
    union all
    select 'High Salary'
) c
left join (
    select account_id, case 
        when income < 20000 then 'Low Salary'
        when income between 20000 and 50000 then 'Average Salary'
        when income > 50000 then 'High Salary'
        end as category
    from Accounts
) t
on c.category = t.category
group by t.category
