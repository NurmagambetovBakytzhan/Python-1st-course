import psycopg2

config = psycopg2.connect(
    host='localhost', 
    database='postgres',
    user='postgres',
    port='5432',
    password='Baqtyzh2003@'
)

current = config.cursor()
sql1 = '''
    CREATE TABLE employee(
		person_name VARCHAR(255) PRIMARY KEY,
		street VARCHAR(255),
		city VARCHAR(255)
	)
'''

sql2 = '''
	CREATE TABLE company(
		company_name VARCHAR(255) PRIMARY KEY,
		city VARCHAR(255)
	)
'''
sql3 = '''
	CREATE TABLE works(
		person_name VARCHAR(255) REFERENCES employee (person_name),
		company_name VARCHAR(255) REFERENCES company (company_name),
		salary INTEGER,
		PRIMARY KEY (person_name, company_name)
	)
'''
sql = '''
    SELECT person_name FROM company WHERE company_name = 'Tungi Kobelek';
SELECT person_name, city FROM employee, works WHERE company_name = 'Orystar_club_Cumelot'
SELECT person_name, city FROM works WHERE salary > 10000;
'''


# (Danial, Codemode)
# Danial Zheka's
# Bakytzhan Zheka's
# Danial Codemode



current.execute(sql)

# final = current.fetchall()
# print(final)  

current.close()
config.commit()
config.close()