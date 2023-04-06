<?php
    session_start();
    $_SESSION["name"] = "Jhon";
    $_SESSION["age"] = 20;
?>
<!DOCTYPE html>
<html>
    <head>
        <title>P1</title>
    </head>
    <body>
        <?php
            echo"Name: ".$_SESSION["name"]."<br>";
            echo"Age: ".$_SESSION["age"]."<br>";
            session_unset();
            session_destroy();
        ?>
    </body>
</html>
