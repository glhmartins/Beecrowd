select concat(substr(cpf, 1, 3), '.',
              substr(cpf, 4,3), '.',
              substr(cpf, 7, 3), '-',
              substr(cpf, 10))
from customers c join natural_person n on c.id = n.id_customers