select s.stock_name,  - s.buy_avg + n.sell_avg as capital_gain_loss 
from (select stock_name, sum(price) as buy_avg from Stocks group by stock_name, operation having operation = 'Buy') s
join (select stock_name, sum(price) as sell_avg from Stocks group by stock_name, operation having operation = 'Sell') n
on s.stock_name = n.stock_name
