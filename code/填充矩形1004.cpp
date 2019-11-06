/*已知矩形的大小为n×m，现用a×a的正方形填充该矩形。输入三个正整数n,m,a（n,m,a≤10^9），计算至多能填入多少正方形？（正方形可以正好碰到矩形边界，但不能超出矩形外）

输入
一行三个用一个空格隔开的正整数n,m,a。

输出
输出能填入正方形的数量。

样例输入
3 4 1

样例输出
12*/
#include<iostream>
using namespace std;
int main(){
	long int n,m,a;
	cin>>n>>m>>a;
	a=(n/a)*(m/a);	
	cout<<a<<endl;
	return 0;
}
