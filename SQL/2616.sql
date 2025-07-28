select c.id, c.name
from customers c
where c.id not in (select c1.id
                    from customers c1 join locations l on c1.id = l.id_customers)
order by c.id;