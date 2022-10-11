#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* pa = &a;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &pa;
//	*pa = 20;//*解引用操作，*pa通过pa里的地址找到a 
//	return 0;
//}

int main()
{
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	return 0;
}