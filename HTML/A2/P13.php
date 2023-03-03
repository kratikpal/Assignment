<!-- Write a php code to demonstrate math function -->
<!DOCTYPE html>
<html>
    <head>
        <title>P13</title>
    </head>
    <body>
        <?php
            $a = 4.7;
            echo"Absolute value of $a is: " . abs($a) . "<br>";
            echo"Round value of $a is: " . round($a) . "<br>";
            echo"Floor value of $a is: " . floor($a) . "<br>";
            echo"Ceiling value of $a is: " . ceil($a) . "<br>";
            echo"Sqrt value of $a is: " . sqrt($a) . "<br>";
            echo "Random number: " . rand(1, 100);
        ?>
    </body>
</html>