/*�����������������ж��ܷ񹹳������ε����ߣ�������ܣ������NO��������ܹ��������Σ��жϹ���ʲô�����Σ����ȱߡ�ֱ�ǡ�һ�������η��࣬���������Ӧ�����������͡�Equilateral������Right������General����

����
����һ�������ÿո������������a,b,c����ʾ�����ε������߳���

���
�����Ӧ�����ε����ͣ�������ܹ��������Σ������NO��������ǵȱ������������Equilateral���������ֱ�������������Right���������������������General����

��������
3 4 5

�������
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
