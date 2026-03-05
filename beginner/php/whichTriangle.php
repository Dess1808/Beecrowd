<?php
class Triangle {
    private $sides = [];

    public function __construct($sides){
        $this->sides = $sides;
    }

    //is it triangule?
    public function isItTriangle(){
        [$a, $b, $c] = $this->sides;
        
        if ((($a + $b) > $c) && (($a + $c) > $b) && (($b + $c) > $a)) {
            return $this->sides;
        } else {
            return null;
        }
    }

    //is it rectangule triangule?
    public function isItRectanguleTriangle() {
        [$a, $b, $c] = $this->sides;

        //to check bug!!!!
        //pitagores formule
        if ((pow($a, 2) + pow($b, 2)) == pow($c, 2) ||
            (pow($a, 2) + pow($c, 2)) == pow($b, 2) ||
            (pow($b, 2) + pow($c, 2)) == pow($a, 2) ){
            return 'S';
        } else {
            return 'N';
        }
    }

    //classification triangule
    public function classificationTriangle(){
        [$a, $b, $c] = $this->sides;

        //scalene 
        if ($a != $b && $a != $c && $b != $c){
           $classTriangule = 'Escaleno'; 
        } elseif ($a === $b && $a === $c && $b === $c) {
            //equilateral
            $classTriangule = 'Equilatero';
        } else {
            //Isoceles
            $classTriangule = 'Isoceles';
        }

        return 'Valido-' . $classTriangule . PHP_EOL . 'Retangulo: ' . self::isItRectanguleTriangle() . PHP_EOL;
    }

}

//identify, catetes and hipotenuse
//input
$sidesString = trim(readLine());
$sides = explode(' ', $sidesString);

$t = new Triangle($sides);

if (!$t->isItTriangle()){
    echo 'Invalido' . PHP_EOL;
} else {
    echo $t->classificationTriangle();
}


/*
    classification triangles by angles
    scalene - all sides are differents (a != b !+= c)
    equilateral -  all sides are equals (a == b == c)
    isoceles - two sides equals (a = b || a == c || b == c)

    rectangule triangle 
    pitagoras formule =  a² + b³ = c²
    
    pow(cateto1, 2) + pow(cateto2, 2) == pow(hipotenuse, 2);

    is it a triangule?
    a + b > c
*/






