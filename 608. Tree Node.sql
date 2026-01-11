select id, 
case 
    when tr.p_id is null  then 'Root'
    when tr.p_id is not null and tg.p_id is not null then 'Inner'
    when tr.p_id is not null and tg.p_id is null then 'Leaf'
end as type
from Tree tr
left join (
    select p_id, count(*) as p_id_count
    from Tree
    where p_id is not null
    group by p_id
) tg
on tr.id = tg.p_id
