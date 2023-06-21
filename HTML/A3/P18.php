<!-- Write a PHP code to insert data into database from web page -->
<!DOCTYPE html>
<html>
    <head>
        <title>18</title>
    </head>
    <body>
        <form method ="POST">
            Name: <input type="text" name="name">
            Age: <input type="number" name="age">
            <button type="submit" name ="submit">Submit</button>
        </form>
        <?php
            $servername = "localhost";
            $username = "root";
            $password = "";
            $database = "db1";

            $conn = mysqli_connect($servername, $username, $password, $database);
            if (!$conn) {
                die("Connection failed: " . mysqli_connect_error());
            }

            if (isset($_POST['submit'])) {
                $name = $_POST['name'];
                $age = $_POST['age'];
                $sql = "INSERT INTO `person` (`name`, `age`) VALUES ('$name', '$age')";
                if(mysqli_query($conn, $sql)) {
                    echo "New record created successfully";
                } else {
                    echo "Error: " .mysqli_error($conn);
                }
            }
            mysqli_close($conn);
        ?>
    </body>
</html>