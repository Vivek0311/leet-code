select e2.employee_id
from (select employee_id, name from Employees) e
right join Employees e2
on e.employee_id = e2.manager_id
where e2.salary < 30000 and e.name is null and e2.manager_id is not null
order by employee_id;
