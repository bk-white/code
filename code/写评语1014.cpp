/*输入某学生成绩score，根据成绩好坏输出相应评语。如果成绩在大于等于90，输出“Excellent”；如果成绩在大于等于80分且小于90分，输出“Good”；如果成绩大于等于60分且小于80分，输出“Pass”；成绩小于60分，输出“Fail”。

输入
输入一个整数score，表示学生的成绩

输出
输出对应的评语。

样例输入
65

样例输出
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
