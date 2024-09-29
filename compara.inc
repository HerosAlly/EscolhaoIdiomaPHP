<?php
if (isset($_COOKIE['lang'])) {
    $lang = $_COOKIE['lang'];
    $conteudo = '';

    switch ($lang) {
        case 'portugues':
            $conteudo = "EMPRESA\nA XXX INDÚSTRIA DE MÁQUINAS LTDA, foi fundada em 1970, e tornou-se o mais importante e tradicional fabricante de máquinas ensacadeiras no Brasil.";
            break;
        case 'ingles':
            $conteudo = "OUR PLANT\nThe XXX INDÚSTRIA DE MÁQUINAS LTDA, was founded in 1970, and became the most important and traditional supplier of BAGGING MACHINES in Brazil.";
            break;
        case 'espanhol':
            $conteudo = "EMPRESA\nLa XXX INDÚSTRIA DE MÁQUINAS LTDA, fue fundada en 1970, y se ha convertido en la más importante y tradicional fábrica de MÁQUINAS ENSACADORAS en Brasil.";
            break;
        default:
            $conteudo = "Idioma não encontrado.";
            break;
    }

    
    file_put_contents('versao.txt', $conteudo);

    
    echo nl2br(file_get_contents('versao.txt'));

 
    echo '<br><a href="limparcookie.php">Escolher outro idioma</a>';
}
?>
