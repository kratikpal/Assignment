<!-- Write a PHP code to update data into database from web page -->
<!DOCTYPE html>
<html>
    <head>
        <title>18</title>
    </head>
    <body>
        <form method ="POST">
            Old Name: <input type="text" name="oldname">
            New Name: <input type="text" name="newname">
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
                $oldname = $_POST['oldname'];
                $newname = $_POST['newname'];
                $sql = "UPDATE `person` SET `name` = '$newname' WHERE `name` = '$oldname'";
                if(mysqli_query($conn, $sql)) {
                    echo " Record updated successfully";
                } else {
                    echo "Error: " .mysqli_error($conn);
                }
            }
            mysqli_close($conn);
        ?>
    </body>
</html>