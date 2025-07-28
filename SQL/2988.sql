select t1.name, 
sum(case
        when m.team_1 = t1.id then 1
        when m.team_2 = t1.id then 1
        else 0
    end) as matches,
sum(case
        when t1.id = m.team_1 and m.team_1_goals>m.team_2_goals then 1
        when t1.id = m.team_2 and m.team_2_goals>m.team_1_goals then 1
        else 0
    end) as victories,
sum(case
        when t1.id = m.team_1 and m.team_1_goals<m.team_2_goals then 1
        when t1.id = m.team_2 and m.team_2_goals<m.team_1_goals then 1
        else 0
    end) as defeats,
sum(case
        when t1.id = m.team_1 and m.team_1_goals=m.team_2_goals then 1
        when t1.id = m.team_2 and m.team_2_goals=m.team_1_goals then 1
        else 0
    end) as draws,
sum(3 * (case
            when t1.id = m.team_1 and m.team_1_goals>m.team_2_goals then 1
            when t1.id = m.team_2 and m.team_2_goals>m.team_1_goals then 1
            else 0
        end) +
    (case
        when t1.id = m.team_1 and m.team_1_goals=m.team_2_goals then 1
        when t1.id = m.team_2 and m.team_2_goals=m.team_1_goals then 1
        else 0
    end)
) AS score
from teams t1 join matches m on t1.id = m.team_1 or t1.id = m.team_2
group by t1.name
order by score desc;