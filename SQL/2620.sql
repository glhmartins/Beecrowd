select c.name, o.id
from customers c join orders o on c.id = o.id_customers
where extract(year from orders_date) = 2016 and extract(month from orders_date) <=6;