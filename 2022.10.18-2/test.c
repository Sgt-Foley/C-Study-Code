#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int age = 20;
//	if (age >= 18)
//		printf("yes\n");
//	else
//	{
//		printf("no\n");//else只拐走一条语句
//		printf("can not make\n");
//	}
//	return 0;
//}

int main()
{
	int age = 0;
	scanf("%d\n", &age);
	if (age < 18)
		printf("shao nian\n");
	else if (18 <= age && age < 26)
		printf("qing nian\n");
	else if (age >= 26 && age < 40)
		printf("zhong nian\n");
	return 0;
}