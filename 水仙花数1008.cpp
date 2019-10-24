/*输入一个三位数n，判断是否为水仙花数，如果是则输出“YES”，不是则输出“NO”。水仙花数：是指一个3位数，它的每个位上的数字的3次幂之和等于它本身。（例如：1^3 + 5^3+ 3^3 = 153）

输入
输入一个三位数n。

输出
按照题目描述输出对应结果。

样例输入
153

样例输出
YES*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n; 
		int a,b,c;
	a=n/100;
	b=n/10%10;
	c=n%10;
	if(a*a*a+b*b*b+c*c*c==n)
		printf("YES");
	else
		printf("NO");
	return 0;
} 
