<!-- Write a PHP code for function overriding -->
<!DOCTYPE html>
<html>
    <head>
        <title>P7</title>
    </head>
    <body>
        <?php
            class BaseClass{
                public function display(){
                    echo "Base Class";
                }
            }
            class DerivedClass extends BaseClass{
                public function display(){
                    echo "Derived Class";
                }
            }
            $obj = new DerivedClass();
            $obj->display();
        ?>
    </body>
</html>