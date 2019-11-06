#include<iostream>
using namespace std;
int main(){
	int i,a=0,s=0;
	for(i=1;i<=100;i++){
		a+=i;
		s+=a;
	}	
	cout<<s<<endl;
	return 0;
} 
