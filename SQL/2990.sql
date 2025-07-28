select e.cpf, enome, dnome
from (empregados e join departamentos d on e.dnumero = d.dnumero) left join trabalha t on e.cpf = t.cpf_emp
where e.cpf not in (select distinct cpf_emp from trabalha)
order by e.cpf asc;