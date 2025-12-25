# Write your MySQL query statement below

select user_id, name, mail 
from Users
-- where mail regexp '^[a-zA-Z][A-Za-z0-9._-]*@leetcode\\.com$'
where REGEXP_LIKE(mail, '^[A-Za-z][A-Za-z0-9._-]*@leetcode\\.com$','c')
