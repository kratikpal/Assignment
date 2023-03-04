<!-- Write a php code to print sum of n elements using associated array -->
<!DOCTYPE html>
<html>
    <head>
        <title>P15</title>
    </head>
    <body>
    <?php
        $marks = array("A" => 70, "B" => 85, "C" => 92, "D" => 68);
        $sum = 0;
        foreach ($marks as $name => $mark) {
            $sum += $mark;
        }
        echo "Total marks: $sum\n";
    ?>
    </body>
</html>