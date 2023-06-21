<!-- Write a PHP code to establish connection between web page and MySql -->
<!DOCTYPE html>
<html>
    <head>
        <title>17</title>
    </head>
    <body>
        <?php
            $servername = "localhost";
            $username = "root";
            $password = "";

            $conn = mysqli_connect($servername, $username, $password);
            if (!$conn) {
                die("Connection failed: " . mysqli_connect_error());
            }
            echo "Connected successfully";
        ?>
    </body>
</html>