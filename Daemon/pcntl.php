<?php
declare(ticks = 1);
$num= 5;//最大子进程数
$child= 0;//当前子进程数
echo getmypid()."\n";
//信号处理函数
function sig_handler($sig)
{
    global$child;
    switch($sig) {
    case SIGCHLD:
    $child--;
    echo'SIGCHLD received! now we have '.$child.' process'.PHP_EOL;
    break;
    case SIGINT:
    $child--;
    echo'SIGINT received! now we have '.$child.' process'.PHP_EOL;
    break;
    case SIGTERM:
    $child--;
    echo'SIGTERM received! now we have '.$child.' process'.PHP_EOL;
    break;
        default:
            # code...
            break;
    }
}

//安装信号处理器
pcntl_signal(SIGTERM,"sig_handler");//进程被kill时发出的信号
// pcntl_signal(SIGHUP,  "sig_handler");//终端关闭时发出的信号
pcntl_signal(SIGINT,"sig_handler");//中断进程信号，如Ctrl+C
pcntl_signal(SIGCHLD,"sig_handler");//进程退出信号

while(true)
{
    $child++;
    $parentpid=getmypid();
    $pid= pcntl_fork();//一分为二，父进程和子进程都会执行以下代码
    if($pid== -1)
    {
        exit("can not fork!");//出错
    }elseif($pid> 0){
        //父进程处理代码
        echo'I am parent.my pid is'.$pid.' and my parent pid is'.$parentpid.PHP_EOL;
        if($child>=$num)
        {
            pcntl_wait($status);//挂起，while语句不会继续执行。等待子进程结束，防止子进程成为僵尸进程
        }
    }elseif($pid== 0){
        //子进程代码
        echo'I am child, and my parent pid is '.$parentpid." my pid is ".getmypid()." now have $child process".PHP_EOL;
        //执行具体代码
        pcntl_exec('/usr/bin/php',array('/var/www/test/mywork.php'));

    }
    pcntl_signal_dispatch();//分发信号，使安装的信号处理器能接收。
    //低于php5.3该函数无效，但有开头的declare (ticks = 1);表示每执行一条低级指令，
    //就检查一次信号，如果检测到注册的信号，就调用其信号处理器
    sleep(rand(3,5));//防止100%占用
}
