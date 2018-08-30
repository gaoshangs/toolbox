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
    update($dbh, $id, $len);
    file_put_contents('./run.log', $id.','.$len."\n", FILE_APPEND);
}
echo 'success';

function update(PDO $dbh, $area_id, $polygon_num) {
    $sth = $dbh->prepare('update t_sale_area_base set is_intersect = :is_intersect, intersect_num = :polygon_num, is_processed = 1 where id = :sale_area_id');
    $sth->execute(
        [
            ':sale_area_id' => $area_id,
            ':polygon_num' => $polygon_num - 1,
            ':is_intersect' => $polygon_num > 1 ? 1 : 0,
        ]
    );
    return $sth->rowCount();
}