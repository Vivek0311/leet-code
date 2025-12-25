select Department, Employee, Salary from (select d.name as Department, e.name as Employee, rank() over(partition by d.name order by e.salary desc) as rnk, salary as Salary
from Employee e
left join Department d
on e.departmentId = d.id) t
where rnk = 1;
