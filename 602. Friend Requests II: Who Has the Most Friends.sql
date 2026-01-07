with counts as 
(
    select t.id, count(*) as num 
    from (
        select requester_id as id from RequestAccepted 
        union all 
        select accepter_id as id from RequestAccepted
    ) t
    group by t.id
)

select id, num 
from counts
where num =( select max(num) from counts);
