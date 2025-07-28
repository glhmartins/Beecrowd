select c.name, round((math*2+specific*3+project_plan*5)/10,2) as avg
from candidate c join score s on c.id = s.candidate_id
order by avg desc;