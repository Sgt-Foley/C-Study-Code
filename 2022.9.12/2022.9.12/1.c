#define _CRT_SECURE_NO_WARNINGS//修正C4996错误

#include<stdio.h>

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	//3;//字面常量,直接写出数字
//
//	//const int num = 4;//const-常属性，const修饰的常变量num所含变量不变化（变量具有常属性）
//	//printf("%d\n", num);
//	//num = 8;
//	//printf("%d\n", num);
//
//	const int n = 10;//const修饰的常变量本质依旧为变量
//	int arr[n] = { 0 };//数组长度必须为常量
//	return 0;
//}

//#define MAX 10//define定义的标识符常量
//
//int main()
//{
//	int arr[MAX];//本质为常量
//	printf("%d\n", MAX);
//	return 0;

enum Sex//枚举关键
{
	MALE,
	FEMALE,
	SECRET,
};//枚举常量,大括号内为所有可能取值,无法被赋值改变
// 
//int main()
//{
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	enum Sex person = MALE;
//	person = FEMALE;//变量的枚举常量类型可以改变，类型本身无法改变
//	return 0;
//}