<!-- Write a php code to print factorial of a given numbe -->
<!DOCTYPE html>
<html>
    <head>
        <title>P9</title>
    </head>
    <body>
        <?php
            $a = 5;
            $fact = 1;
            for ($i = 1; $i <= $a; $i++) {
                $fact *= $i;
            }
            echo "Factorial of $a is $fact";
        ?>
    </body>
</html>