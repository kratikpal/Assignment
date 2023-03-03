<!-- Write a php code to perform basic calculator operations -->
<!DOCTYPE html>
<html>
    <head>
        <title>P8</title>
    </head>
    <body>
        <?php
            $a = 5;
            $b = 10;
            $op = '+';
            switch ($op) {
                case '+':
                    echo "$a + $b = " . ($a + $b);
                    break;
                
                case '-':
                    echo "$a - $b = " . ($a - $b);
                    break;

                case '*':
                    echo "$a * $b = " . ($a * $b);
                    break;

                case '/':
                    echo "$a / $b = " . ($a / $b);
                    break;
                    
                default:
                    echo "Invalid operator";
            }
        ?>
    </body>
</html>