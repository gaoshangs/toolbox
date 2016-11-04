<?php
/**
 * Created by PhpStorm.
 * User: gaoshangwang
 * Date: 16/3/17
 * Time: 上午11:15
 */
//每隔2000ms触发一次
swoole_timer_tick(2000, 'onTimeTick',array('name'=>'zhangsan'));


function onTimeTick($timer_id,$params) {
    echo "tick-2000ms\n";
    var_dump($params);
}

//3000秒后执行此函数
//swoole_timer_after(3000, function () {
//    echo "after 3000ms.\n";
//});