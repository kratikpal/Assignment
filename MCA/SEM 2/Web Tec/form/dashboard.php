<?php
    // Get user ID from URL parameter
    $userId = $_GET['id'] ?? null;

    // Establish database connection
    $servername = "localhost";
    $username = "root";
    $password = "";
    $dbname = "user";

    $conn = new mysqli($servername, $username, $password, $dbname);

    // Check connection
    if ($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
    }

    // Function to sanitize input
    function sanitize($data) {
        return htmlspecialchars(stripslashes(trim($data)));
    }

    // Function to fetch user data
    function getUserData($conn, $userId) {
        $sql = "SELECT * FROM users WHERE id = ?";
        $stmt = $conn->prepare($sql);
        $stmt->bind_param("i", $userId);
        $stmt->execute();
        $result = $stmt->get_result();
        $user = $result->fetch_assoc();
        return $user;
    }

    // Fetch user data
    if ($userId) {
        $user = getUserData($conn, $userId);
    }

    $conn->close();
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>User Dashboard</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <div class="container">
        <h2>User Dashboard</h2>
        <?php if (isset($user) && $user) { ?>
            <div class="form-group">
                <label>Name:</label>
                <p><?php echo sanitize($user['name']); ?></p>
            </div>
            <div class="form-group">
                <label>Email:</label>
                <p><?php echo sanitize($user['email']); ?></p>
            </div>
            <div class="form-group">
                <label>Date of Birth:</label>
                <p><?php echo sanitize($user['dob']); ?></p>
            </div>
            <div class="form-group">
                <label>Country:</label>
                <p><?php echo sanitize($user['country']); ?></p>
            </div>
            <div class="form-group">
                <label>Hobbies:</label>
                <p><?php echo sanitize($user['hobbies']); ?></p>
            </div>
            <div class="option">
                <button onclick="window.location.href='index.php'">
                    Logout
                </button>
            </div>
            
        <?php } else { ?>
            <p class="error">User not found.</p>
        <?php } ?>
    </div>
</body>
</html>
