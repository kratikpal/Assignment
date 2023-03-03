<!-- Write a php code to check whether a given number is positive, negative or zero -->
<!DOCTYPE html>
<html>
    <head>
        <title>P6</title>
    </head>
    <body>
        <?php
            $a = 5;
            if ($a > 0) {
                echo "$a is positive";
            }
            elseif ($a < 0) {
                echo "$a is negative";
            }
            else {
                echo "$a is zero";
            }
        ?>
    </body>
</html>