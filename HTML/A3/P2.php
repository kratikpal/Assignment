<!-- Write a PHP code for creating, accessing and destroying COOKIE -->
<?php
    setcookie("name","Jhon",time()+3600,"/");
?> 
<!DOCTYPE html>
<html>
    <head>
        <title>P2</title>
    </head>
    <body>
        <?php
            if(isset($_COOKIE["name"])){
                echo"Name: ".$_COOKIE["name"]."<br>";
            }           
        ?>
    </body>
</html>