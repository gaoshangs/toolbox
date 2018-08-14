<?php
/**
 * Created by PhpStorm.
 * User: gaoshangwang
 * Date: 2018/8/13
 * Time: 下午12:22
 */

$request = array_merge($_GET, $_POST);
$data = json_decode($request['data'], true);
$dbh = new PDO('mysql:host=localhost;dbname=crm_db', 'root', 'root');

foreach ($data as $id => $len) {
    $ret = add($dbh, $id, $len);
    file_put_contents('./run.log', $id.','.$len.','.$ret."\n", FILE_APPEND);
}

function add(PDO $dbh, $area_id, $polygon_num) {
    $sth = $dbh->prepare('INSERT INTO simply_sale_area(sale_area_id, polygon_num) VALUES(:sale_area_id, :polygon_num)');
    $sth->execute(
        [
            ':sale_area_id' => $area_id,
            ':polygon_num' => $polygon_num
        ]
    );
    return $sth->rowCount();
}