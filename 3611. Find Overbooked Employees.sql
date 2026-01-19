select *
from (
    select m.employee_id, e.employee_name, e.department, count(e.employee_id) as meeting_heavy_weeks
    from employees e
    join (
            select employee_id, year(meeting_date) as yr, week(meeting_date) wk
            from meetings
            group by employee_id, year(meeting_date), week(meeting_date, 1)
            having sum(duration_hours) > 20
        ) m
    on e.employee_id = m.employee_id 
    group by e.employee_id, e.employee_name, e.department
    having count(*) >= 2
)t
order by t.meeting_heavy_weeks desc, t.employee_name asc;
