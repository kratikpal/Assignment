<!-- Write a PHP code to create a class and access properties and methods using its object -->
<!DOCTYPE html>
<html>
    <head>
        <title>P5</title>
    </head>
    <body>
        <?php
            class Person{
                public $name;
                public $age;
                public function __construct($name,$age){
                    $this->name = $name;
                    $this->age = $age;
                }
                public function display(){
                    echo"Name: ".$this->name."<br>";
                    echo"Age: ".$this->age."<br>";
                }
            }
            $p1 = new Person("Jhon",20);
            $p1->display();
        ?>
    </body>
</html>