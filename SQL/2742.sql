select l.name, round((l.omega*1.618), 3)
from life_registry l join dimensions d on l.dimensions_id = d.id
where l.name like '%Richard%' and d.name in ('C774', 'C875')
order by l.omega asc;