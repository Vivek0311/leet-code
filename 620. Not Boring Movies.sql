select id, movie, description, rating
from Cinema 
where lower(description) != 'boring' and id%2 = 1
order by rating desc;
