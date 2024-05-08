<!DOCTYPE html>
<html>
    <head>
        <title>User Authentication</title>
        <link rel="stylesheet" type="text/css" href="styles.css" />
    </head>

    <body>

    <?php
        //Connect to the database
        $servername = "localhost";
        $username = "root"; 
        $password = ""; 
        $dbname = "user"; 

        // Create connection
        $conn = new mysqli($servername, $username, $password, $dbname);

        // Check connection
        if ($conn->connect_error) {
            echo "Connection failed: " . $conn->connect_error;
            die("Connection failed: " . $conn->connect_error);
        }

        // Retrieve the form data
        if ($_SERVER["REQUEST_METHOD"] == "POST") {
            $email = $_POST['email'];
            $password = $_POST['password'];

            // SQL to check if email and password match
            $sql = "SELECT * FROM users WHERE email='$email' AND password='$password'";
            $result = $conn->query($sql);

            if ($result->num_rows > 0) {
                // Fetch the user ID from the result
                $row = $result->fetch_assoc();
                $userId = $row['id'];
                // Redirect to dashboard.php with userId
                header("Location: dashboard.php?id=$userId");
            } else {
                header("Location: index.php?error=Incorrect email or password");
                exit();
            }
        }

        $conn->close();
        ?>

    </body>
</html>
