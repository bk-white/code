/*��д���򣬼������зֶκ���y=f(x)��ֵ����������Ϊ���������������С�������λ����
 

����
����x��

���
���f(x)��ֵ���𰸱�����λС����

��������
1

�������
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
