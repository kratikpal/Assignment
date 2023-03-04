<!-- .Write a php code to print transpose of a given 2D array -->
<!DOCTYPE html>
<html>
    <head>
        <title>P16</title>
    </head>
    <body>
        <?php
            $matrix = array(
                array(1, 2, 3),
                array(4, 5, 6),
                array(7, 8, 9)
            );
            $transpose = array();
            $rows = count($matrix);
            $cols = count($matrix[0]);

            function printMatrix($matrix) {
                foreach ($matrix as $row) {
                  foreach ($row as $cell) {
                    echo "$cell ";
                  }
                  echo "<br>";
                }
            }

            for($i = 0; $i < $rows; $i++){
                for($j = 0; $j < $cols; $j++){
                    $transpose[$i][$j] = $matrix[$j][$i];
                }
            }
            echo"Original matrix: <br>";
            printMatrix($matrix);
            echo"Transpose matrix: <br>";
            printMatrix($transpose);
        ?>
    </body>
</html>