select m.id, m.name
from movies m join genres g on id_genres = g.id
where g.description = 'Action';