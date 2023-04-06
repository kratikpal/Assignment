<!-- Write a PHP code for function overloading -->
<!DOCTYPE html>
<html>
    <head>
        <title>P6</title>
    </head>
    <body>
        <?php
            class MyClass{
                public function __call($name,$arg){
                    if($name == "area"){
                        switch(count($arg)){
                            case 0:
                                return 0;
                            case 1:
                                return  $arg[0]*$arg[0]*3.141;
                            case 2:
                                return  $arg[0]*$arg[1];
                            default:
                                echo "Wrong number of arguments";
                                break;
                        }
                    }
                }
            }
            $obj = new MyClass();
            echo "Area of circle is " .($obj->area(10))."<br>";
            echo "Area of rectangle is " .($obj->area(10,20))."<br>";
        ?>
    </body>
</html>