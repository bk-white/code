/*��������˫���ȸ�����a��b�����������a��b��������������������r���Ķ����ǣ�a = k * b + r������ k�������� 0 <= r < b��

����
һ�������ո��������a��b��

���
���a����b������(�𰸱�����λС��)��

��������
3 2

�������
1.00*/
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double a,b,r,k;
	
	cin>>a>>b;
	k=int(a/b);
	r=a-b*k;
	printf("%.2lf",r);
	return 0;
}
