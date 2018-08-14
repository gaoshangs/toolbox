<?php
/**
 * Created by PhpStorm.
 * User: gaoshangwang
 * Date: 2018/8/13
 * Time: 上午11:25
 */

//$borders = [
//    13 => '116.228862,39.602826;116.201266,39.588037;116.184809,39.536415;116.239785,39.512482',
//    16 => '116.122934,39.580919;116.120922,39.529069;116.184162,39.536192;116.20026,39.587147',
//    18 => '119.484044,35.43429;119.490655,35.434407;119.495183,35.434569;119.506591,35.434657;119.519168,35.43454;119.524953,35.434422;119.527252,35.434334;119.528007,35.434304;119.529058,35.434172;119.529139,35.426349;119.529166,35.420606;119.529148,35.414987;119.526327,35.415105;119.523426,35.415098;119.519859,35.416517;119.517883,35.417253;119.515871,35.41812;119.514865,35.418503;119.513679,35.418885;119.511469,35.419532;119.507319,35.421003;119.505738,35.421591;119.501534,35.422974;119.494931,35.425187;119.488023,35.427533;119.483837,35.428827;119.48270387808569,35.42956910025179;119.48109319537198,35.430813655434164;119.477055,35.434216;119.477055,35.434268;119.477082,35.434216;119.477064,35.434268;119.477028,35.434209'
//];

//simplify_polygon($borders);
$dbh = new PDO('mysql:host=localhost;dbname=crm_db;charset=utf8', 'root', 'root');
$i = 0;
$limit = 100;
while (true) {
    $num = $i* $limit;
    $lines = select($dbh, $num, $limit);
    if (empty($lines)) {
        break;
    }
    $borders = [];
    foreach ($lines as $line) {
        $borders[$line['id']] = $line['border'];
    }
    simplify_polygon($borders);
    $i++;
}

function select(PDO $dbh, $offset, $limit) {
    $sth = $dbh->prepare("SELECT * FROM t_sale_area_base WHERE status = 0 ORDER BY id ASC LIMIT $offset, $limit");
    $sth->execute();
    return $sth -> fetchAll(PDO::FETCH_ASSOC);
}
function simplify_polygon($borders) {
    $region_borders = [];
    foreach ($borders as $id => $border) {
        $region_borders[$id] = format($border);
    }
    $borders_json = json_encode($region_borders);
    $jsStr = <<<ETO
<script src="clipper.js"></script>
<script src="jquery-3.3.1.js"></script>
<script type="application/javascript">
    function simplifyPolygon(path) {
        var scale = 1000000;
        ClipperLib.JS.ScaleUpPath(path, scale);
        var paths = ClipperLib.Clipper.SimplifyPolygon(path, ClipperLib.PolyFillType.pftEvenOdd);
        return paths.length
    }
    var paths = $borders_json;
    var params = {}
    for (var id in paths) {
        var polygon_len = simplifyPolygon(paths[id]);
        params[id] = polygon_len;
    }
    $.ajax({
        url: "http://www.toolbox.com/php/jsclipper/check_self_intersection.php",
        type: "POST",
        data: {"data":JSON.stringify(params)},
        success:function(data) {
          console.log(data)
        }
    });
</script>
ETO;
    echo $jsStr;
}

function format($border) {
    $border_points = array_unique(explode(';', trim($border,';')));
    $border_point_arr = [];
    foreach ($border_points as $index => $border_point) {
        list($x, $y) = explode(',', $border_point);
        $border_point_arr[] = [
            'X' => floatval($x),
            'Y' => floatval($y)
        ];
    }
    return $border_point_arr;
}





