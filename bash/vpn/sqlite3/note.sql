-help -version -init -echo -stats -bail
-header -column -csv -html -line -list -separator -nullvalue

.databases .backup .restore
.tables .schema .indices .dump .read .import
.show .mode .separator .width .header .mullvalue
.prompt .echo .log .output .stats .timer .explain
.help .exit .quit .bail .load .timeout

--

CREATE TABLE stu(name VARCHAR(64), age INTEGER);
CREATE VIEW stu_view AS SELECT * FROM stu;
CREATE INDEX stu_idx ON stu(name);
ALTER TABLE stu RENAME TO student;
ALTER TABLE stu ADD COLUMN score int;
DROP TABLE stu;
DROP VIEW stu_view;
DROP INDEX stu_idx;


current_time current_date current_timestamp
null integer real text blob

not null
default 'shy'
check()
primary key autoincrement
unique(name,age)
collate nocase
asc
desc

INSERT INTO stu(name, age) VALUES('shy', 26);
DELETE FROM stu WHERE name = 'shy';
UPDATE stu SET age = 29 WHERE name = 'shy';
SELECT name, age FROM stu WHERE age > 20 GROUP BY name HAVING count(*) > 10 ORDER BY age asc LIMIT 10 OFFSET 3;

distinct
case name
	when 'shy' then 'shaoying'
	else null
end
count() sum() avg() min() max()
length() upper() lower()
abs()

t1 inner join t2 on f1 = f2
t1 left outer join t2 on f1 = f2
t1 cross join t2


||
* / % + - 
<< >>
= != > >= < >=
and or not in is like glob
like % _
is null is not null

union intersect except
