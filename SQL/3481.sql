select node_id, 'LEAF' as type
from nodes
where node_id is not null and pointer is null

union

select node_id, 'INNER' as type
from nodes
where node_id is not null and pointer is not null and node_id != 50

union

select node_id, 'ROOT' as type
from nodes
where node_id = 50

order by node_id asc;