#include <stdio.h>//包含一个stdio.h的文件（stdio-standard input output）

//int main()//主函数-程序的入口，有且仅有一个。程序首先从main函数第一行执行
//{
	//这里负责完成程序主要任务
	//屏幕输出
	//printf("hello\n");//函数-print format - 打印函数
	//库函数-C语言本身提供的函数（别人提供的函数）
	//需要跟函数拥有者打个招呼-#include<stdio.h>
	//return 0;
//}

//int main()//int意思为整型，main前面的int表示main函数调用返回一个整型值


//int main()
//{
//	char ch = 'A';//char-字符类型，创建了ch变量（向内存申请一块空间存放ch代表的数据）
//	printf("%c\n",ch);//%c--打印字符格式的数据
//	int age = 20;
//	printf("%d\n", age);//%d--打印整型十进制数据
//	float f = 5.0;
//	printf("%f\n", f);
//	double d = 3.14;
//	printf("%lf", d);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

int main()
	{
	short age = 20;//向内存申请2个字节（short占用）存放20
	float weight = 56.3f;//向内存申请4个字节存放56.3

	return 0;
	}