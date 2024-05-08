<!DOCTYPE html>
<html>
    <head>
        <title>User Registration</title>
        <link rel="stylesheet" type="text/css" href="styles.css" />
    </head>

    <body>
        <div id="animation" class="center">
            <!-- Animation container -->
            <div class="loader"></div>
            <!-- Green tick and success message -->
            <div class="success" style="display: none;">
                <svg class="tick" viewBox="0 0 24 24">
                    <path fill="green" d="M20.61 4.19L9.24 15.56l-4.19-4.18L2 12.24l7.24 7.25 14.12-14.12z"/>
                </svg>
                <p>User registered successfully</p>
            </div>
        </div>

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
            $name = $_POST['name'];
            $email = $_POST['email'];
            $password = $_POST['password'];
            $dob = $_POST['dob'];
            $gender = $_POST['gender'];
            $country = $_POST['country'];
            $hobbies = implode(", ", $_POST['hobbies']); 

            // Insert the data into the database
            $sql = "INSERT INTO users (name, email, password, dob, gender, country, hobbies)
                    VALUES ('$name', '$email', '$password', '$dob', '$gender', '$country', '$hobbies')";

            if ($conn->query($sql) === TRUE) {
                echo "<script>
                    document.getElementById('animation').style.display = 'block';
                    setTimeout(function() {
                        document.querySelector('.success').style.display = 'block';
                        document.querySelector('.loader').style.display = 'none';
                        setTimeout(function() {
                            window.location.href = 'index.php';
                        }, 2000);
                    }, 2000);
                </script>";
                exit();
            } else {
                echo "Error: " . $sql . "<br>" . $conn->error;
            }
        }

        $conn->close();
        ?>
    </body>
</html>