/*输入三个正整数，判断能否构成三角形的三边，如果不能，输出“NO”。如果能构成三角形，判断构成什么三角形？按等边、直角、一般三角形分类，依次输出对应的三角形类型“Equilateral”、“Right”、“General”。

输入
输入一行三个用空格隔开的正整数a,b,c，表示三角形的三条边长。

输出
输出对应三角形的类型，如果不能构成三角形，输出“NO”，如果是等边三角形输出“Equilateral”，如果是直角三角形输出“Right”，其他三角形则输出“General”。

样例输入
3 4 5

样例输出
Right*/
#include<iostream>
#include<stdio.h>
#include<cmath> 
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c&&a+c>b&&b+c>a){
		if(a==b&&a==c)
			printf("Equilateral");
		else if(a*a+b*b==c*c)
			printf("Right");
		else
			printf("General");
	}
	else
		printf("NO");
		return 0;
}
