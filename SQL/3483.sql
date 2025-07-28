(select city_name, population
from cities
where population not in (select max(population) from cities)
order by population desc
limit 1)

union all

(select city_name, population
from cities
where population not in (select min(population) from cities)
order by population asc
limit 1)