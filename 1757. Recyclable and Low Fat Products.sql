select product_id
from Products
where upper(low_fats) = 'Y' and upper(recyclable) = 'Y'
