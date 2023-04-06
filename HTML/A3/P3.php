<!-- Write a PHP code for swapping two numbers using call by value -->
<!DOCTYPE html>
<html>
    <head>
        <title>P3</title>
    </head>
    <body>
        <?php
            function swap($a,$b){
                $temp = $a;
                $a = $b;
                $b = $temp;
                echo"After swapping: a = ".$a." and b = ".$b."<br>";
            }
            $a = 10;
            $b = 20;
            echo"Before swapping: a = ".$a." and b = ".$b."<br>";
            swap($a,$b);
        ?>
    </body>
</html>