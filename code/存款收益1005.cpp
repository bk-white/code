/*��������R%���뱾ǮX������P���ı����ϼ�ΪY=X*((100+R)/100)^P����Y��ֵ��

����
����һ�������ո������ʵ��R,X,P

���
�������Y���𰸱�����λС����

��������
1 100 5

�������
105.10*/
#include<iostream>
#include<math.h> 
#include<stdio.h>
using namespace std;
int main(){
	double r,x,p,y;
	cin>>r>>x>>p;
	r=(r+100)/100;//���� 
	y=x*pow(r,p);//��������ʳ������� 
	printf("%.2lf",y);
	return 0; 
} 
