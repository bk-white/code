/*憨厚的老农夫昨天捡到了3块小石头，他想再去捡一个小石头,让这4个石头正好一共重20斤，请问他应该去捡一个多少斤的石头?

输入
三个整数a,b,c,是这三个石头的重量(斤)

输出
一个数，表示农夫应该去捡一个多少斤的石头。

样例输入
3 5 7

样例输出
5*/
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c;
	d=20-(a+b+c);
	printf("%d",d);
	return 0;
}
