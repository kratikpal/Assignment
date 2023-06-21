<!-- Write a PHP code to delete data into database from web page -->
<!DOCTYPE html>
<html>
    <head>
        <title>19</title>
    </head>
    <body>
        <form method ="POST">
            Name: <input type="text" name="name">
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
                $sql = "DELETE FROM `person` WHERE `name` = '$name'";
                if(mysqli_query($conn, $sql)) {
                    echo " Record deleted successfully";
                } else {
                    echo "Error: " .mysqli_error($conn);
                }
            }
            mysqli_close($conn);
        ?>
    </body>
</html>