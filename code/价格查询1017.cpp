/*���ʵ�����¹��ܣ���ѯˮ���ĵ��ۡ���4��ˮ����ƻ��(apples)����(pears)������(oranges)������(grapes)�����۷ֱ���3.00Ԫ/���2.50Ԫ/���4.10Ԫ/�����10.20Ԫ/���
���г������������Ļ����ʾ���²˵�(��ź�ѡ��)������������
���û�������1��4����ʾ��Ӧˮ���ĵ���(����1λС��)������0���˳���ѯ������������ţ���ʾ�۸�Ϊ0��

����
����һ��������

���
�����Ӧ�Ľ����

��������
3

�������
[1] apples
[2] pears
[3] oranges
[4] grapes
[0] Exit
price=4.1*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int x;
	cin>>x;
	printf("[1] apples\n");
	printf("[2] pears\n");
	printf("[3] oranges\n");
	printf("[4] grapes\n");
	printf("[0] Exit\n");
	switch(x){
		case 0:
			return 0;
		case 1:
			printf("price=3.0\n");break;
		case 2:
			printf("price=2.5\n");break;
		case 3:
			printf("price=4.1\n");break;
		case 4:
			printf("price=10.2\n");break;
		default:
            printf("price=0\n");
	}
	return 0;
} 
