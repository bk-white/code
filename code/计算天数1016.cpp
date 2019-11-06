/*输入年份与月份，求该月共有多少天。

输入
输入两个空格隔开的正整数year和month，分别表示年份和月份

输出
输出对应year这一年month这个月的天数。

样例输入
2000 2

样例输出
29*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int year,month;
	cin>>year>>month;
	switch(month)
	{
		case 1:cout<<"31"; break;
		case 2:
			if(year%4==0&&year%100!=0)
			{
				cout<<"29"; break;
			}
			else
			{
				if(year%400==0)
				{
					cout<<"29"; break;
				}
				cout<<"28"; break;
			}
		case 3:cout<<"31"; break;
		case 4:cout<<"30"; break;
		case 5:cout<<"31"; break;
		case 6:cout<<"30"; break;
		case 7:cout<<"31"; break;
		case 8:cout<<"31"; break;
		case 9:cout<<"30"; break;
		case 10:cout<<"31";break;
		case 11:cout<<"30";break;
		case 12:cout<<"31";break;
	}
	return 0;
}
