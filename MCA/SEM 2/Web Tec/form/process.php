<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $name = $_POST["name"];
    $email = $_POST["email"];
    $message = $_POST["message"];

    // You can perform further validation here if needed

    // Save the data to a file, database, or send it via email
    // For demonstration, let's just display the submitted data
    echo "<h2>Form Submitted Successfully</h2>";
    echo "<p><strong>Name:</strong> $name</p>";
    echo "<p><strong>Email:</strong> $email</p>";
    echo "<p><strong>Message:</strong> $message</p>";
} else {
    // If someone tries to access process.php directly
    echo "<h2>Error: Direct access forbidden</h2>";
}
?>