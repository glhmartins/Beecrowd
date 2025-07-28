select year, s.name as sender, r.name as receiver
from (users s join packages p on s.id = p.id_user_sender) join users r on p.id_user_receiver = r.id
where (p.color = 'blue' or year = 2015) and (s.address != 'Taiwan' and r.address != 'Taiwan')
order by year desc;