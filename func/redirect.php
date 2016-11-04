<?php
function jsRedirect($msg, $url=''){
    header("content-type: text/html; charset=utf-8");
    $html = '';
    if(!empty($msg)){
        $html.="<script type='text/javascript'>";
        $html.="alert(".$msg.")";
        $html.="</script>";
    }
    die($html);
}
jsRedirect('aa');
