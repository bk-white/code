/*��������1~7�ı�ʾ����һ�������գ������Ӧ�����ڼ���Ӣ�����ơ�
�����1�����Monday;
�����2�����Tuesday;
�����3�����Wednesday;
�����4�����Thursday;
�����5�����Friday;
�����6�����Saturday;
�����7�����Sunday;

����
����һ������

���
�����Ӧ��Ӣ������

��������
1

�������
Monday*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int x;
	cin>>x;
	switch(x){
		case 1:
			printf("Monday");break;
		case 2:
			printf("Tuesday");break;
		case 3:
			printf("Wesdednesday");break;
		case 4:
			printf("Thursday");break;
		case 5:
			printf("Friday");break;
		case 6:
			printf("Saturday");break;
		case 7:
			printf("Sunday");break;
	}
	return 0;
}
