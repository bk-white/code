/*�������������߳�a,b,c����֤�ܹ��������Σ�����������������

����
һ��������һ���ո������ʵ��a,b,c����ʾ�����ε������߳���

���
��������ε�������𰸱�����λС����

��������
3 4 5

�������
6.0000*/

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	double a,b,c,p,area;
	cin>>a>>b>>c;
	//if(a+b>c&&a+c>b&&b+c>a)
		p = (a+b+c)/2;
		area = sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<fixed<<setprecision(4)<<area<<endl;
	return 0; 
}
