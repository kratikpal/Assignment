<!-- Write a PHP code for reading data from file -->
<!DOCTYPE html>
<html>
    <head>
        <title>P12</title>
    </head>
    <body>
        <?php
            $fileName = "example.txt";
            $file = fopen($fileName, "r");

            $fileContent = file_get_contents($fileName);
            echo $fileContent;
            fclose($file);
        ?>
    </body>
</html>