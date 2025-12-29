select * from products
where description collate utf8_bin regexp '(^|[^A-Za-z0-9])SN[0-9]{4}-[0-9]{4}([^0-9]|$)' 
order by product_id;
