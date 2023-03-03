<!-- .Write a php code to print Fibonacci series up to n -->
<!DOCTYPE html>
<html>
    <head>
        <title>P11</title>
    </head>
    <body>
        <?php
            $n = 10;
            $a = 0;
            $b = 1;
            echo "Fibonacci series up to $n are: ";
            do {
                echo "$a ";
                $c = $a + $b;
                $a = $b;
                $b = $c;
            } while ($c <= $n);
        ?>
    </body>
</html>