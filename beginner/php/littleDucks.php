<?php
//worked but, bc's libary can show problems with lager number
while(($duck = trim(readLine())) >= 0){
    if ($duck == 0)
        echo $duck . PHP_EOL;
    else    
        echo bcsub($duck, '1') . PHP_EOL;
}



