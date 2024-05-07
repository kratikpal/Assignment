<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $email = $_POST["email"];
    $password = $_POST["password"];

    // You can perform further validation here if needed

    // Save the data to a file, database, or send it via email
    // For demonstration, let's just display the submitted data
    if($email == "admin@gmail.com" && $password == "admin"){
        echo "<h2>Form Submitted Successfully</h2>";
    }
    else{
        echo "<h2>Error: Invalid email or password</h2>";
    }
} else {
    // If someone tries to access process.php directly
    echo "<h2>Error: Direct access forbidden</h2>";
}
?>