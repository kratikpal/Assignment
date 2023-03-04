<!-- Write a php code to reverse elements of an array using indexed array -->
<!DOCTYPE html>
<html>
    <head>
        <title>P14</title>
    </head>
    <body>
        <?php
            $arr = array(1,2,3,4,5);
            $rev = array();
            echo "Original array: ";
            print_r($arr);
            echo "<br>";
            for($i = count($arr) - 1; $i >= 0; $i--){
                $rev[] = $arr[$i];
            }
            echo "Reversed array: ";
            print_r($rev);
        ?>
    </body>
</html>