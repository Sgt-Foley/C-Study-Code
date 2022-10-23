#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//结构体可以让C语言创建新类型
struct Stu//创建一个学生结构体
{
	char name[20];//名字
	int age;//年龄
	double score;//成绩
};


int main()
{
	struct Stu s = { "Zhang San",20,80 };//结构体的创建和初始化
	
	printf("1:%s %d %lf\n", s.name, s.age, s.score);//"."操作符，"s"为结构体变量，可以找到成员
	struct Stu * ps = &s;//*ps指针存放结构体s地址
	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);//"->"结构体指针--成员变量名
	return 0;//%lf打印双精度浮点型（打印数值巩固）
}