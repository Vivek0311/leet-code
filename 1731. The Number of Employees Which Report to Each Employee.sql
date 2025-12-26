select e.employee_id, e.name, t.reports_count, t.average_age 
from Employees e
join (select reports_to, count(reports_to) as reports_count, round(avg(age),0) as average_age
from Employees
group by reports_to) t
on e.employee_id = t.reports_to
order by e.employee_id
