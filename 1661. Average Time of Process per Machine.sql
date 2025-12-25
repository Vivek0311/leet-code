# Write your MySQL query statement below

select machine_id, round(avg(t.time_taken), 3) processing_time
from (select machine_id, max(timestamp) over (partition by machine_id, process_id) - min(timestamp) over (partition by machine_id, process_id) as time_taken from Activity) t
group by machine_id
