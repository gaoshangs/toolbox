<?php
class yinyong{
	public function __construct(){
		$this->a = 0; 
		$this->b = &$this->a; 
		$this->c = array('left'=>'ccc');
		$this->d = &$this->c;
	}
	
	//更换引用
	public function twice($n){
		$this->b = &$n;
		$n = 3;
		var_dump($this->a, $this->b, $n);
		$this->b = 4;
		var_dump($this->a, $this->b, $n);
	}

	public function foo(){
		$y = &$this->a;
		$x = &$this->b;
		var_dump($y,$x);
		$x = 'xxxx';
		var_dump($this->a,$this->b,$y,$x);
	}

	public function check(){
		$y = &$this->a;
		$x = &$this->b;
		while($x <4){
			$x++;
		}
		var_dump($x,$y,$this->a,$this->b);
	}
	
	public function cover(){
		$x = &$this->c;
		$y = &$this->d;
		$y = &$x;
		$x = &$x['left'];
		var_dump($this->c, $this->d, $x, $y);
		echo "===============\n";
		$y['right'] = &$z;
		$z = array(1, 2, 3);
		var_dump($this->c, $this->d, $x, $y);
	}
}
$yinyong = new yinyong();
//$yinyong ->test();
//$yinyong -> foo();
//$yinyong->check();
//$yinyong->twice(1);
$yinyong->cover();
