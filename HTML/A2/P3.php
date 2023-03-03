<!DOCTYPE html>
<html>
<head>
    <title>P2</title>
</head>
<body>
    <?php
        $a = "Global variable";
        function myFunction() {
            $b = "Local variable";
            global $a;
            echo "Value of a: $a <br>";
            echo "Value of b: $b <br>";
        }
        myFunction();
    ?>
</body>
</html>