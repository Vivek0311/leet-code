select round(count(distinct player_id) * 1.0 / (select count(distinct player_id) from Activity), 2) as fraction
from (
    select player_id, event_date, 
    lead(event_date) over (partition by player_id order by event_date) as next_date,
    min(event_date) over (partition by player_id order by event_date) as first_login
    from Activity 
) t
where event_date = first_login and datediff(next_date, event_date) = 1;
