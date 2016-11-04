<?php
/**
 * Created by PhpStorm.
 * User: gaoshangwang
 * Date: 5/18/16
 * Time: 10:40 AM
 */
require 'RBTree.php';
$rbt = new RBTree();
$rbt->insert(array("left" => null, "right" => null, "parent" => null, "color" => "RED", "isnil" => false, "data" => 4));
$rbt->insert(array("left" => null, "right" => null, "parent" => null, "color" => "RED", "isnil" => false, "data" => 6));
$rbt->insert(array("left" => null, "right" => null, "parent" => null, "color" => "RED", "isnil" => false, "data" => 5));
//var_dump($rbt->nil);
exit;

$rbt = new RBTree();
echo "hah\n";
//$rbt->insert(array("left" => null,"right" => null,"parent" => null,"color" => "RED","isnil" => false,"data" => 1));
echo "hah\n";
//$rbt->insert(array("left" => null,"right" => null,"parent" => null,"color" => "RED","isnil" => false,"data" => 2));
echo "hah\n";
//$rbt->insert(array("left" => null,"right" => null,"parent" => null,"color" => "RED","isnil" => false,"data" => 3));
echo "hah\n";
//$rbt->printTreePreorder($rbt->root,0);
$rbt->insert(array("left" => null, "right" => null, "parent" => null, "color" => "RED", "isnil" => false, "data" => 4));//执行此处的时候出了问题
echo "hah\n";
$rbt->insert(array("left" => null, "right" => null, "parent" => null, "color" => "RED", "isnil" => false, "data" => 5));

$rbt->insert(array("left" => null, "right" => null, "parent" => null, "color" => "RED", "isnil" => false, "data" => 6));

$rbt->insert(array("left" => null, "right" => null, "parent" => null, "color" => "RED", "isnil" => false, "data" => 7));

$rbt->insert(array("left" => null, "right" => null, "parent" => null, "color" => "RED", "isnil" => false, "data" => 8));
$rbt->insert(array("left" => null, "right" => null, "parent" => null, "color" => "RED", "isnil" => false, "data" => 9));
//$rbt->printTreePreorder($rbt->root,0);

$rbt->insert(array("left" => null, "right" => null, "parent" => null, "color" => "RED", "isnil" => false, "data" => 23));

//$rbt->printTreePreorder($rbt->root,0);
/*
下面插入12之后,红黑树被破坏了
之前的树

                          4B
                        /   \
                       2B    6B
                      /  \  /  \
                     1B  3B 5B  8R
                               /  \
                              7B   9B
                                    \
                                    23R


正确的做法应该是12 会加到 23的left child, RED RED 冲突
uncle是BLACK,z本身是left child,我们应该做一个right rotate

                          4B
                        /   \
                       2B    6B
                      /  \  /  \
                     1B  3B 5B  7B
                                  \
                                  9B
                                 /  \
                                8R  23R
                                   /
                                  12R

正确的结果应该是

                          4B
                        /   \
                       2B    6B
                      /  \  /  \
                     1B  3B 5B  8R
                               /  \
                               7B  12B
                                  /  \
                                 9R  23R

*/
$rbt->insert(array("left" => null, "right" => null, "parent" => null, "color" => "RED", "isnil" => false, "data" => 12));
//$rbt->printTreePreorder($rbt->root,0);
$rbt->insert(array("left" => null, "right" => null, "parent" => null, "color" => "RED", "isnil" => false, "data" => 10));
$rbt->insert(array("left" => null, "right" => null, "parent" => null, "color" => "RED", "isnil" => false, "data" => 24));
$rbt->insert(array("left" => null, "right" => null, "parent" => null, "color" => "RED", "isnil" => false, "data" => 28));
$rbt->insert(array("left" => null, "right" => null, "parent" => null, "color" => "RED", "isnil" => false, "data" => -12));
//$rbt->insert(array("left" => null,"right" => null,"parent" => null,"color" => "RED","isnil" => false,"data" => -5));
//$rbt->insert(array("left" => null,"right" => null,"parent" => null,"color" => "RED","isnil" => false,"data" => -20));
//$rbt->insert(array("left" => null,"right" => null,"parent" => null,"color" => "RED","isnil" => false,"data" => -3));
$rbt->insert(array("left" => null, "right" => null, "parent" => null, "color" => "RED", "isnil" => false, "data" => 102));
$rbt->insert(array("left" => null, "right" => null, "parent" => null, "color" => "RED", "isnil" => false, "data" => 90));
$rbt->insert(array("left" => null, "right" => null, "parent" => null, "color" => "RED", "isnil" => false, "data" => 72));
$rbt->insert(array("left" => null, "right" => null, "parent" => null, "color" => "RED", "isnil" => false, "data" => 720));
$rbt->insert(array("left" => null, "right" => null, "parent" => null, "color" => "RED", "isnil" => false, "data" => 121));
$rbt->printTreePreorder($rbt->root, 0);

$rbt->delete2(4, $rbt->root);

$rbt->delete2(5, $rbt->root);

$rbt->delete2(8, $rbt->root);
$rbt->delete2(24, $rbt->root);
$rbt->delete2(28, $rbt->root);
$rbt->delete2(9, $rbt->root);
$rbt->delete2(6, $rbt->root);
$rbt->delete2(12, $rbt->root);
echo "haha\n";
$rbt->printTreePreorder($rbt->root, 0);

//finishing\

//  红黑树在实际使用的时候,似乎会倾向于像右边倾斜