#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()//选择语句
//
//{
//	int input = 0;
//	printf("jion bitt\n");
//	printf("do you want to study hard(1/0)?>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("a good offer");
//	else
//		printf("a good seller");
//	return 0;
//}

//int main()//循环
//
//{
//	int line = 0;
//	while (line < 30000)
//	{
//	printf("write c:%d\n",line);
//	line=line+2;
//	}
//	if(line==30000)
//	{
//		printf("good offer");
//	}
//
//	return 0;
//}

//Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

//int main()//函数
//
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//
//	//int sum = num1 + num2;//普通解决方式
//
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//}

//int main()//数组
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char ch[5] = { 'a','b','c' };//变量输入字符必须''，字符串必须""
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//}

//int main()//移位符
//{
//	int a = 2;
//	int b = a << 1;
//
//	printf("%d\n", b);
//	return 0;
//}

//int main()//赋值操作符
//{
//	int a = 0;
//	//a = a + 2;
//	a += 2;//a+=2(a=a+2)
//	printf("%d", a);
//	return 0;
//}

//int main()//!操作符
//{
//	int a = 0;//0表示假，非0就是真
//	printf("%d", !a);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//计算数组总大小
//	printf("%d\n", sizeof(arr[0]));//计算数组单个数大小
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组长度
//	printf("%d\n", sz);
//	return 0;
//}