<!-- Write a php code to demonstrate string handling function -->
<!DOCTYPE html>
<html>
    <head>
        <title>P12</title>
    </head>
    <body>
        <?php
            $str = "Hello World";
            echo "Length of string is: " . strlen($str);
            echo "<br>";
            echo "Reverse of string is: " . strrev($str);
            echo "<br>";
            echo "Uppercase: " . strtoupper($str);
            echo "<br>";
            echo "Lowercase: " . strtolower($str);
            echo "<br>";
            echo "Replace: " . str_replace("World", "Universe", $str);
        ?>
    </body>
</html>