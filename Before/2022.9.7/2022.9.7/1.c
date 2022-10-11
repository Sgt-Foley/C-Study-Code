#include<stdio.h>

//int a = 100;

//int main()
//{
//	int a = 10;//局部变量与全局变量同时存在，局部变量优先
//	printf("%d\n", a);
//	return 0;
//}int num2 = 20;//全局变量

//int main()
//{
//	int num1 = 10;//局部变量
//	printf("%d\n", num1);
//	return 0;
//}


int main()
{
	//计算两个数的和
	int num1 = 0;
	int num2 = 0;
	int sum = 0;//定义变量必须放在代码块最前面
	//输入数据--scanf输入函数
	scanf_s("%d%d", &num1, &num2);//&取地址符号
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}