/*按年利率R%存入本钱X，存入P年后的本利合计为Y=X*((100+R)/100)^P，求Y的值。

输入
输入一行三个空格隔开的实数R,X,P

输出
输出收益Y，答案保留两位小数。

样例输入
1 100 5

样例输出
105.10*/
#include<iostream>
#include<math.h> 
#include<stdio.h>
using namespace std;
int main(){
	double r,x,p,y;
	cin>>r>>x>>p;
	r=(r+100)/100;//利率 
	y=x*pow(r,p);//本金加利率乘以年数 
	printf("%.2lf",y);
	return 0; 
} 
