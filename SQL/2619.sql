select p.name, pr.name, p.price
from (products p join providers pr on p.id_providers = pr.id) join categories c on p.id_categories = c.id
where price>1000 and c.name = 'Super Luxury';