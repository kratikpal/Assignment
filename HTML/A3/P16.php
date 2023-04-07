<!-- .Write a PHP code for renaming and deleting the file -->
<!DOCTYPE html>
<html>
    <head>
        <title>P16</title>
    </head>
    <body>
        <?php
            if(rename("example.txt","example2.txt")){
                echo "File renamed successfully <br>";
            }
            else{
                echo "File not renamed <br>";
            }
            if(unlink("example2.txt")){
                echo "File deleted successfully <br>";
            }
            else{
                echo "File not deleted <br>";
            }
        ?>
    </body>
</html>