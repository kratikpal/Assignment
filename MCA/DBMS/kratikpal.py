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

#  function to create table
def create_table():
    sql = "CREATE TABLE car (CarId NUMERIC, Brand VARCHAR(20), Model VARCHAR(20), Owner VARCHAR(20))"
    try:
        cursor.execute(sql)
        print("Table created successfully")
    except:
        print("Table already exists")


# funcrion to delete table
def delete_table():
    sql = "DROP TABLE car"
    try:
        cursor.execute(sql)
        print("Table deleted successfully")
    except:
        print("Table doesn't exist")


# function to insert values
def insert(carId: int, carName: str, brand: str, owner: str):
    sql = "INSERT INTO car VALUES (%s, %s, %s, %s)"
    val = (carId, carName, brand, owner)
    cursor.execute(sql, val)
    mydb.commit()
    print(cursor.rowcount, "record inserted.")


# function to delete values
def delete(carId: int):
    sql = "DELETE FROM car WHERE CarId = %s"
    val = (carId,)
    cursor.execute(sql, val)
    mydb.commit()
    print(cursor.rowcount, "record deleted.")


# function to display values
def display():
    sql = "SELECT * FROM car"
    cursor.execute(sql)
    result = cursor.fetchall()
    for x in result:
        print(x)

# driver code
while(True):
    print("Enter 1 to create table")
    print("Enter 2 to delete table")
    print("Enter 3 to insert values")
    print("Enter 4 to delete values")
    print("Enter 5 to display values")
    print("Enter 6 to exit")
    choice = int(input())
    if choice == 1:
        create_table()
    elif choice == 2:
        delete_table()
    elif choice == 3:
        carId = int(input("Enter CarId: "))
        brand = input("Enter Brand: ")
        carName = input("Enter Model: ")
        owner = input("Enter Owner: ")
        insert(carId, carName, brand, owner)
    elif choice == 4:
        carId = int(input("Enter CarId: "))
        delete(carId)
    elif choice == 5:
        display()
    elif choice == 6:
        break