# Write your MySQL query statement below

select s.student_id, s.student_name, s.subject_name, coalesce(e.attended_exams, 0) as attended_exams
from (
    select * from Students cross join Subjects
    ) s
left join (
    select student_id, subject_name, count(subject_name) as attended_exams 
    from Examinations 
    group by student_id, subject_name) e
on s.student_id = e.student_id and s.subject_name = e.subject_name
order by s.student_id, s.subject_name
