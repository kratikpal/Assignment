<!-- Write a PHP code for appending data into file -->
<!DOCTYPE html>
<html>
    <head>
        <title>P14</title>
    </head>
    <body>
        <?php
            $fileName = "example.txt";
            $file = fopen($fileName, "a");

            fwrite($file, "Hello All!");
            fclose($file);
            echo "File appended successfully";
        ?>
    </body>
</html>