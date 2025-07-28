select p.name
from products p join providers pr on p.id_providers = pr.id
where amount>10 and amount<20 and pr.name like 'P%';