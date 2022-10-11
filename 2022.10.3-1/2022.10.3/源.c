#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()//按位取反
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	
//	return 0;
//}

//int main()//++ / --（自加 / 自减）
//{
//	int a = 10;
//	int b = a++;
//	printf("%d\n", b);
//	printf("%d\n", a);
//
//	return 0;
//}
//
//int main()//(类型)强制类型转换
//{
//	int a = (int)3.14;//强制类型转换
//
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 3, b = 0, c = a || b;
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()//条件操作符
//{
//	int a = 0, b = 3, max = 0;
//	max = a > b ? a : b;
//	printf("%d\n", max);
//
//	return 0;
//}

//int main()//逗号表达式
//{
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	//			a=5			c=1			b=3
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//逗号表达式从左向右依次计算
//	//整个表达式结果最后一个表达式结果
//	printf("%d\n", d);
//
//	return 0;
//}

//int main()//下标引用操作符
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", arr[5]);
//	return 0;
//}

//int main()//调用函数操作符
//{
//	printf("hello,are you OK?\n");
//	printf("%d\n", 100);
//	return 0;
//}

//int main()
//{
//	register int num = 100;//建议num的值存放在寄存器里
//	return 0;
//}