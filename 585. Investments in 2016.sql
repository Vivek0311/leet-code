select round(sum(pat_tab.tiv_2016), 2) as tiv_2016 
from (
    select tiv_2016, 
    count(*) over (partition by tiv_2015) as tiv_count,
    count(*) over (partition by lat, lon) as loc_count
    from Insurance
) pat_tab
where pat_tab.tiv_count > 1 and pat_tab.loc_count = 1
