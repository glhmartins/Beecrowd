select p.name, pr.name
from products p join providers pr on p.id_providers = pr.id
where pr.name = 'Ajax SA';