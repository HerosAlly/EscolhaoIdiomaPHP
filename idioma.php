<?php
if (isset($_GET['lang'])) {
    $idioma = $_GET['lang'];
    setcookie('lang', $idioma, time() + (3 * 86400), "/"); 
    header('Location: index.php');
    exit;
}
?>