/*����ĳѧ���ɼ�score�����ݳɼ��û������Ӧ�������ɼ��ڴ��ڵ���90�������Excellent��������ɼ��ڴ��ڵ���80����С��90�֣������Good��������ɼ����ڵ���60����С��80�֣������Pass�����ɼ�С��60�֣������Fail����

����
����һ������score����ʾѧ���ĳɼ�

���
�����Ӧ�����

��������
65

�������
Pass*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int x;
	cin>>x; 
	if(x<60){
		printf("Fail");
	}
	if(60<=x&&x<80){
		printf("Pass");
	}
	if(80<=x&&x<90){
		printf("Good");
	}
	if(x>=90){
		printf("Excellent");
	}
	return 0; 
} 
