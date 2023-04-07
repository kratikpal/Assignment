<!-- Write a PHP code for writing data into file -->
<!DOCTYPE html>
<html>
    <head>
        <title>P13</title>
    </head>
    <body>
        <?php
            $fileName = "example.txt";
            $file = fopen($fileName, "w");

            fwrite($file, "Hello User!");
            fclose($file);
            echo "File written successfully";
        ?>
    </body>
</html>