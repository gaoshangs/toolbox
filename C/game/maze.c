#include <stdio.h>
#define rows 6
#define cols 8
//全局变量保存地图
char map[rows][cols] = {

    {'#',' ','#','#','#','#','#','#'},

    {'#','O','#','#',' ',' ',' ','#'},

    {'#',' ','#','#',' ','#',' ','#'},

    {'#',' ',' ','#',' ','#',' ','#'},

    {'#','#',' ',' ',' ','#',' ','#'},

    {'#','#','#','#','#','#',' ','#'}

};
/**
 *  打印地图
 */
void showMap();
//保存小人当前的位置：
int currenRow = 1;
int currenCol = 1;
/**
 *  接受用户的输入
 *
 *  @return 返回操作
 */
char getPlayerDirection();
/**
 *  小人向上
 */
void moToUp();
/**
 *  小人向下
 */
void moToDown();
/**
 *  小人向左移动
 */
void moToLeft();
/**
 *  小人向右移动
 */
void moToRight();

int main(int argc, const char * argv[])
{
    while (1)
    {
        showMap();
        if (currenRow ==4 && currenCol == 6)
        {
            printf("很牛逼！\n");
            return 0;
        }
        int dir = getPlayerDirection();
        switch (dir)
        {
            case 'w':
            case 'W':
                moToUp();
                break;
            case 'a':
            case 'A':
                moToLeft();
                break;
            case 'D':
            case 'd':
                moToRight();
                break;
            case 's':
            case 'S':
                moToDown();
                break;
            case 'q':
            case 'Q':
                printf("游戏太难了，退出！\n");
                return 0;
            default:
                printf("输入有误！\n");
                break;

        }
    }







    return 0;
}

/**
 *  打印地图
 */
void showMap()
{
    for (int i = 0; i<rows; i++)
    {
        for (int j = 0; j<cols; j++)
        {
            printf("%c",map[i][j]);
        }
        printf("\n");
    }

}
/**
 *  接受用户的输入
 *
 *  @return 返回操作
 */
char getPlayerDirection()
{
    printf("下一步的操作是:w-上 a-左，d-右，s-下，q-退出\n");
    char dir;
    rewind(stdin);
    scanf("%c",&dir);
    return dir;
}

/**
 *  小人向上
 */
void moToUp()
{
    //若小人向上移动，则保存一下地址
    int nextRow = currenRow -1;
    int nextCol = currenCol;
    if (map[nextRow][nextCol] == ' ')
    {
        //路变成人 人变成路
        map[nextRow][nextCol] ='0';
        map[currenRow][currenCol] =' ';

        //更新小人的位置

        currenRow = nextRow;
        currenCol = nextCol;
    }
}

/**
 *  小人向下
 */
void moToDown()
{

    //若小人向下移动，则保存一下地址
    int nextRow = currenRow +1;
    int nextCol = currenCol;
    if (map[nextRow][nextCol] == ' ')
    {
        //路变成人 人变成路
        map[nextRow][nextCol] ='0';
        map[currenRow][currenCol] =' ';

        //更新小人的位置

        currenRow = nextRow;
        currenCol = nextCol;
    }
}

/**
 *  小人向左移动
 */
void moToLeft()
{
    //若小人向左移动，则保存一下地址
    int nextRow = currenRow ;
    int nextCol = currenCol -1;
    if (map[nextRow][nextCol] == ' ')
    {
        //路变成人 人变成路
        map[nextRow][nextCol] ='0';
        map[currenRow][currenCol] =' ';

        //更新小人的位置

        currenRow = nextRow;
        currenCol = nextCol;
    }
}


/**
 *  小人向右移动
 */
void moToRight()
{
    //若小人向右移动，则保存一下地址
    int nextRow = currenRow ;
    int nextCol = currenCol + 1;
    if (map[nextRow][nextCol] == ' ')
    {
        //路变成人 人变成路
        map[nextRow][nextCol] ='0';
        map[currenRow][currenCol] =' ';

        //更新小人的位置

        currenRow = nextRow;
        currenCol = nextCol;
    }
}
