/*����һ����λ��n���ж��Ƿ�Ϊˮ�ɻ�����������������YES���������������NO����ˮ�ɻ�������ָһ��3λ��������ÿ��λ�ϵ����ֵ�3����֮�͵��������������磺1^3 + 5^3+ 3^3 = 153��

����
����һ����λ��n��

���
������Ŀ���������Ӧ�����

��������
153

�������
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
