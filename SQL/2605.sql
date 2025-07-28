select p.name, pr.name
from (products p join providers pr on id_providers = pr.id) join categories c on id_categories = c.id
where c.id = 6;