select p.name, c.name
from products p join categories c on p.id_categories = c.id
where amount>100 and c.id in (1,2,3,6,9)
order by c.id asc;