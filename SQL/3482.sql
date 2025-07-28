select u1.user_name as u1_name, u2.user_name as u2_name
from (users u1 join followers f on u1.user_id = f.user_id_fk) join users u2 on u2.user_id = f.following_user_id_fk
where u1.posts<u2.posts and (u2.user_name, u1.user_name) in (select u1.user_name, u2.user_name
                                                             from (users u1 join followers f on u1.user_id = f.user_id_fk) join users u2 on u2.user_id = f.following_user_id_fk)
order by u1.user_id;