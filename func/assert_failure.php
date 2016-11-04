<?php
// 处理断言失败时的函数
function assert_failure($file,$line,$desc)
{
    var_dump($file,$line,$desc);
    echo 'Assert failed';
}

// 我们的测试函数
function test_assert($parameter)
{
    assert(is_bool($parameter));
}

// 设置断言标志
assert_options(ASSERT_ACTIVE,   true);
assert_options(ASSERT_BAIL,     true);
assert_options(ASSERT_WARNING,  false);
assert_options(ASSERT_CALLBACK, 'assert_failure');

// 让一个断言会失败
test_assert(1);

// 由于 ASSERT_BAIL 是 true，这里永远也到不了
echo 'Never reached';
