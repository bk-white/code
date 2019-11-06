/*编写程序，计算下列分段函数y=f(x)的值（输入数据为浮点数，输出保留小数点后三位）。
 

输入
输入x。

输出
输出f(x)的值，答案保留三位小数。

样例输入
1

样例输出
3.500*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	double x;
	cin>>x;
	if(x>=0&&x<5)
		printf("%.3lf",2.5+x);
	else if(x>=5&&x<10)
		printf("%.3lf",2-1.5*(x-3)*(x-3));
	else if(x>=10&&x<20)
		printf("%.3lf",x/2-1.5);
	return 0;
}
