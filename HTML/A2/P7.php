<!-- Write a php code to find greatest among three numbers -->
<!DOCTYPE html>
<html>
    <head>
        <title>P7</title>
    </head>
    <body>
        <?php
            $a = 5;
            $b = 10;
            $c = 15;
            if ($a > $b) {
                if($a > $c) {
                    echo "$a is greatest";
                }
                else {
                    echo "$c is greatest";
                }
            }
            elseif ($b > $c) {
                echo "$b is greatest";
            }
            else {
                echo "$c is greatest";
            }
        ?>
    </body>
</html>