<?php
/**
 *	作者：戚银
 *	网名：诺天
 *	QQ：804603662
 *	邮箱：804603662@qq.com    noxiaotian@sina.com
 *	版权声明：完全开源
 *	作者声明：我把这个分页类暂时命名为史上最强大的分页类，有点夸大，不喜勿喷。
 *	作者期望：给分页类还存在一些不足之处，如果各位网友有好的意见或改进的方案，都可QQ联系作者予以讨论和交流
 */

	function microtime_float(){
		list($usec, $sec) = explode(" ", microtime());
		return ((float)$usec + (float)$sec);
	}
	include 'page.class.php';
	$time_start = microtime_float();
	$page = new Page(990,10,10,'p1');
	$page->pageType = '%up%<span class="number">%numberD%</span>%down%';
	$page->pageShow = array('up'=>'< 上一页','down'=>'下一页 >');
	$p1 = $page->pageShow();
	$page = new Page(990,10,6,'p2');
	$page->pageType = '<span class="f up">%up%</span><span class="number">%numberF%</span>%omitE%<span class="f down">%down%</span><span class="total">共 %pageToatl% 页</span>%input%%GoTo%';
	$page->pageShow = array('GoTo'=>'确定');
	$p2 = $page->pageShow();
	$time_end = microtime_float();
	$time = $time_end - $time_start;
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>分页类演示文档</title>
<script type="text/javascript" src="images/jquery.js"></script>
<script type="text/javascript">
	$(function(){
		$('body > div:last').css('display','none');
	})
</script>
<style type="text/css">
*{padding:0;margin:0;}
body{padding:20px;font-size:14px;}
h1{margin:20px;}
a{text-decoration: none;}
/*百度分页样式*/
#p1{margin:20px 0;height:60px;}
#p1 .disabled{display:none;}
#p1 a{display:block;float:left;padding:0 6px;height:24px;line-height:24px;border:1px solid #ccc;margin-left:3px;margin-top:33px;}
#p1 .number{display:block;float:left;padding:0px;background:#fff url("images/baidu2.jpg") repeat-x 5px top;}
#p1 .number a{padding:0px;height:24px;width:22px;line-height:24px;text-align:center;}
#p1 span.current{margin-left:3px;padding:34px 0 0;display:block;float:left;height:24px;width:23px;line-height:24px;text-align:center;background:#fff url("images/baidu.gif") no-repeat top center;}
/*淘宝分页样式*/
#p2{margin:20px 0;}
#p2 .disabled{display:none;}
#p2 a,#p2 span{display:block;float:left;}
#p2 a{margin-left:5px;}
#p2 .f a{color:#2D5D8E;width:57px;height:22px;border:1px solid #cacaca;line-height:22px;text-align:center;}
#p2 .number a,#p2 span.current{color:#60719F;width:24px;height:22px;border:1px solid #cacaca;line-height:22px;text-align:center;}
#p2 span.omit{color:#666;border:0;width:24px;text-align:center;padding-top:9px;}
#p2 span.current{border-color:#B1723D;color:#B1723D;margin-left:5px;}
#p2 .total{margin-left:5px;height:22px;line-height:22px;padding:0 5px;color:#888;}
#p2 .up a{padding-left:4px;background:url('images/tbup.jpg') no-repeat 2px center;}
#p2 .down a{padding-right:4px;background:url('images/tbdown.jpg') no-repeat 52px center;}
#p2 input{text-align:center;padding:0px;float:left;border:1px solid #ccc;width:30px;height:22px;line-height:22px;margin-right:5px;}
#p2 button{float:left;}
.aaa{display:none;}
</style>
</head>
<body>
	<h2 style="color:blue;">计算所有分页使用时间为:<span style="color:#f00;"><?php echo $time;?>秒</span></h2>
	<h1>分页类演示文档（<span style="color:#f00;">模拟网络99%的分页效果</span>）</h1>
	<h2>一、百度分页效果(截的图，尺寸计算不是很精确)</h2>
	<div id="p1">
		<?php echo $p1;?>
	</div>
	<h2>二、淘宝分页效果</h2>
	<div id="p2">
		<?php echo $p2;?>
	</div>
	<div class="aaa"><div class="aaa">
</body>
</html>
