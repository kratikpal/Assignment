import mysql.connector

# connecting to the database
mydb = mysql.connector.connect(
    host="localhost",
    user="root",
    password="",
)

cursor = mydb.cursor()

db_name = "mydb"
cursor.execute(f"SHOW DATABASES LIKE '{db_name}'")
result = cursor.fetchone()

# Create the database if it doesn't exist
if not result:
    cursor.execute(f"CREATE DATABASE {db_name}")
    print(f"Database '{db_name}' created successfully.")


# Connect to the database
mydb = mysql.connector.connect(
    host="localhost",
    user="root",
    password="",
    database=db_name
)

cursor = mydb.cursor()

name = []
types = []
noOfAttri = int(input("Enter the number of attributes: "))

for i in range(noOfAttri):
    print("Enter the name of attribute", i + 1)
    name.append(input())
    print("Select the type of attribute", i + 1)
    print("1. Numeric")
    print("2. Varchar")
    print("3. Date")
    match int(input()):
        case 1:
            types.append("NUMERIC")
        case 2:
            types.append("VARCHAR(20)")
        case 3:
            types.append("DATE")
        case _:
            types.append("VARCHAR(20)")


# creating table from the user input
sql = "CREATE TABLE " + name[0] + " ("
for i in range(noOfAttri):
    sql += name[i] + " " + types[i] + ","
sql = sql[:-1]
sql += ");"

cursor.execute(sql)

noOfTuples = int(input("Enter the number of tuples: "))

# inserting values into the table from the user input
for i in range(noOfTuples):
    print("Enter the values of tuple", i + 1)
    sql = "INSERT INTO " + name[0] + " VALUES ("
    for j in range(noOfAttri):
        print("Enter the value of", name[j])
        if types[j] == "NUMERIC":
            sql += input() + ","
        else:
            sql += "'" + input() + "',"
    sql = sql[:-1]
    sql += ");"
    cursor.execute(sql)

mydb.commit()
