<!-- Write a PHP code to retrieve data on webpage from database -->
<!DOCTYPE html>
<html>
<head>
    <title>21</title>
</head>
<body>
    <?php
        $servername = "localhost";
        $username = "root";
        $password = "";
        $database = "db1";

        $conn = mysqli_connect($servername, $username, $password, $database);
        if (!$conn) {
            die("Connection failed: " . mysqli_connect_error());
        }

        $sql = "SELECT * FROM `person`";
        $result = mysqli_query($conn, $sql);

        if (mysqli_num_rows($result) > 0) {
            echo "<table>";
            echo "<th>Name</th><th>Age</th></tr>";

            while($row = mysqli_fetch_assoc($result)) {
                echo "<tr>";
                echo "<td>".$row["name"]."</td>";
                echo "<td>".$row["age"]."</td>";
                echo "</tr>";
            }

            echo "</table>";
        } else {
            echo "No records found";
        }

        mysqli_close($conn);
    ?>
</body>
</html>
