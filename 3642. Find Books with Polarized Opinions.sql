select b.book_id, b.title, b.author, b.genre, b.pages, rs.rating_spread, rs.polarization_score
from books b
left join 
(
    select book_id, 
    max(session_rating) - min(session_rating) as rating_spread, 
    round(sum(case 
        when session_rating <=2 or session_rating>=4 then 1 
        else 0 end
    ) * 1.0 / count(*), 2) as polarization_score
    from reading_sessions
    group by book_id
    having count(*) >= 5 and min(session_rating) <=2 and max(session_rating) >=4
) rs
on rs.book_id = b.book_id
where polarization_score is not null and polarization_score >=0.6 and rating_spread is not null
order by polarization_score desc, b.title desc;
