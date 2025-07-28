select c.name, sum(amount)
from products p join categories c on id_categories = c.id
group by c.id