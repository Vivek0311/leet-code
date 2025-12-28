select employee_id, case when employee_id % 2 = 1 and lower(name) not like 'm%' then salary
else 0 end as bonus 
from Employees
order by employee_id
