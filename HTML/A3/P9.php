<!-- Write a PHP code for login credentials using POST method -->
<!DOCTYPE html>
<html>
    <head>
        <title>P8</title>
    </head>
    <body>
        <form method="POST">
            <label>Username:</label>
            <input type="text" name="username">
            <label>Password:</label>
            <input type="password" name="password">
            <button type="submit" name="submit">Login</button>
        </form>
        <?php
            if(isset($_POST["submit"])){
                $username = $_POST["username"];
                $password = $_POST["password"];
                echo "Welcome" ."<br>";
                echo "Username:" .$username ."<br>";
                echo "Password:" .$password ."<br>";
            }
        ?>
    </body>
</html>