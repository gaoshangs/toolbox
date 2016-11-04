<?php
	class PdoDriver {
		/**
	     * @var PDO | string
	     */
	    public $link = null;
	    private $host;
		private $port;
	    private $dbName;
	    private $userName;
	    private $password;

		public function __construct(){}

		/*
		 * 连接数据库
		 * @params host,dbName,userName,password
		 *
		 *
		 **/
		public function connect($params = array()) {
			if(empty($params['dbName'])){
				return false;
			}
			$this->dbName    = $params['dbName'];
	 		$this->host 	 = (isset($params['host']) && !empty($params['host'])) ? $params['host'] : '127.0.0.1';
	 		$this->port 	 = (isset($params['port']) && !empty($params['port'])) ? $params['port'] : 3306;
	        $this->userName  = (isset($params['userName']) && !empty($params['userName'])) ? $params['userName'] : 'root';
	        $this->password  = (isset($params['password']) && !empty($params['password'])) ? $params['password'] : 'root';

	 		$dsn = "mysql:host=" . $this->host . ";port=" . $this->port . ";dbname=" . $this->dbName;
	        $opts = array(PDO::ATTR_ERRMODE => PDO::ERRMODE_EXCEPTION, PDO::ATTR_PERSISTENT => false);
	        try {
	            $this->link = new PDO($dsn, $this->userName, $this->password, $opts);
	        } catch (PDOException $e) {
	            die('Connect failed !' . $e->getMessage());
	        }

	        return $this->link;
		}

		//断开连接
	    public function disConnect() {
	        $this->link = null;
	    }
	}

    $pdo = new PdoDriver();
    $pdo->connect(array('dbName'=>'push'));
    sleep(10);
    $pdo->connect(array('dbName'=>'push'));
    $pdo->connect(array('dbName'=>'push'));
    $pdo->connect(array('dbName'=>'push'));
    $pdo->connect(array('dbName'=>'push'));
    sleep(10);
    $pdo->link = null;
    sleep(20);
