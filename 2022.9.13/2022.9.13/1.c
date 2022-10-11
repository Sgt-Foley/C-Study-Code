#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	//"abcdef";//字符串：用双引号括起来的一串字符
	//char arr[] = "hello";//字符串结尾处隐藏\0字符（字符串结束标志），arr表示字符数组
	char arr1[] = "abc";//""表示字符串，''表示字符
	char arr2[] = { 'a','b','c' };//无"\0"结束标志，继续向后打印，直到有\0存在停止
	char arr3[] = { 'a','b','c' ,'\0'};
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//printf("%s\n", arr3);
	int len1 = strlen("abc");//string length表示字符串长度
	int len2 = strlen(arr2);
	printf("%d\n", len1);//并且\0不作为长度出现在输出中
	printf("%d\n", len2);//len2长度为随机
	return 0;
}