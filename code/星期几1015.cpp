/*输入数字1~7的表示星期一至星期日，输出对应的星期几的英文名称。
如果是1，输出Monday;
如果是2，输出Tuesday;
如果是3，输出Wednesday;
如果是4，输出Thursday;
如果是5，输出Friday;
如果是6，输出Saturday;
如果是7，输出Sunday;

输入
输入一个数字

输出
输出对应的英文名称

样例输入
1

样例输出
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
