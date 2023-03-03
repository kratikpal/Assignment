<!-- Write a php code to print prime numbers up to n-->
<!DOCTYPE html>
<html>
    <head>
        <title>P10</title>
    </head>
    <body>
        <?php
            $n = 10;
            $i = 2;
            echo "Prime numbers up to $n are: ";
            while ($i <= $n) {
                $flag = 0;
                for ($j = 2; $j < $i/2; $j++) {
                    if ($i % $j == 0) {
                        $flag = 1;
                        break;
                    }
                }
                if ($flag == 0) {
                    echo "$i ";
                }
                $i++;
            }
        ?>
    </body>
</html>