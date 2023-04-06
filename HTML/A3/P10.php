<!-- Write a PHP code for handling text fields (validation) -->
<!DOCTYPE html>
<html>
    <head>
        <title>P8</title>
    </head>
    <body>
        <form method="POST">
            <label>Name:</label>
            <input type="text" name="name">
            <label>Email:</label>
            <input type="text" name="email">
            <button type="submit" name="submit">Login</button>
        </form>
        <?php
            if(isset($_POST["submit"])){
                $name = $_POST["name"];
                $email = $_POST["email"];
                if(!empty($name) && preg_match("/^[a-zA-Z ]*$/",$name)){
                    echo "Name is valid <br>";
                }else{
                    echo "Name is invalid <br>";
                }
                if(!empty($email) && filter_var($email, FILTER_VALIDATE_EMAIL)){
                    echo "Email is valid <br>";
                }else{
                    echo "Email is invalid <br>";
                }
            }
        ?>
    </body>
</html>