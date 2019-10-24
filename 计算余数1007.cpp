/*计算两个双精度浮点数a和b相除的余数，a和b都是正数。这里余数（r）的定义是：a = k * b + r，其中 k是整数， 0 <= r < b。

输入
一行两个空格隔开的数a和b。

输出
输出a除以b的余数(答案保留两位小数)。

样例输入
3 2

样例输出
1.00*/
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double a,b,r,k;
	
	cin>>a>>b;
	k=int(a/b);
	r=a-b*k;
	printf("%.2lf",r);
	return 0;
}
