#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <string.h>

#define MAXLEN 256

//参数dest是目标字符串, maxlen是最大长度，
//如果输入超过了最大长度，则密码将会被截断
//成功返回0，否则返回－1
int new_getpass(char *dest, int maxlen)
{
	struct termios oldflags, newflags;
	int len;

	//设置终端为不回显模式 
	tcgetattr(fileno(stdin), &oldflags);
	newflags = oldflags;
	newflags.c_lflag &= ~ECHO;
	newflags.c_lflag |= ECHONL;
	if (tcsetattr(fileno(stdin), TCSANOW, &newflags) != 0)
	{
		perror("tcsetattr");
		return -1;
	}

	//获取来自键盘的输入
	fgets(dest, maxlen, stdin);
	len = strlen(dest);
	if( len > maxlen-1 )
		len = maxlen - 1;
	dest[len-1] = 0;

	//恢复原来的终端设置
	if (tcsetattr(fileno(stdin), TCSANOW, &oldflags) != 0)
	{
		perror("tcsetattr");
		return -1;
	}
	return 0;
}

int main()
{
	char password[MAXLEN];
	printf("Enter password: ");
	new_getpass(password, MAXLEN);
	printf("You password is: %s\n", password);
	return 0;
}

