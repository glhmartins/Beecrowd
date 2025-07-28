select l.queue, l.id as left, r.id as right
from chairs l, chairs r
where l.queue = r.queue and r.id = (l.id+1) and r.available and l.available
order by l.id asc;