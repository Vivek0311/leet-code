select lb.book_id, lb.title, lb.author, lb.genre, lb.publication_year, lb.total_copies as current_borrowers
from library_books lb
join (
    select book_id, count(*) as total_borrowed
    from borrowing_records
    where return_date is null
    group by book_id 
    
) br
on lb.book_id = br.book_id
where (lb.total_copies - br.total_borrowed) = 0
order by lb.total_copies desc, lb.title asc;
