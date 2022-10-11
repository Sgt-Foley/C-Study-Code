#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()//转义字符
//
//{
//	//printf("c:\test\test.c");//无法直接打印出\t
//	//printf("%c\n", '\'');
//	//printf("%s\n", "abc");
//	//printf("%s\n", "\"");
//
//	//printf("%c\n", '\130');//8进制转换成10进制是多少
//	//printf("%c\n", '\101');//A的十进制ASCII码为65，八进制为101
//
//	//printf("%d\n", strlen("abc"));
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	return 0;
//}

int main()//注释方法
{
//	int a = 1;//C++注释风格
	/*
	int b = 2;
	*/
	//C语言注释风格，有缺陷，无法嵌套，不支持嵌套注释
	printf("%d\n",1);
}