
#include<stdio.h>
#include<cmath>
int main(){
	int a,b,c,d,x;
	scanf("%d",&x);
	if(1000<=x&&x<10000){
		a=x%10;
		b=x/10%10;
		c=x/100%10;
		d=x/1000%10;
		printf("4\n");
		printf("%d\n",d);
		printf("%d\n",c);
		printf("%d\n",b);
		printf("%d\n",a);
	}
	else if(100<=x&&x<1000){
		a=x%10;
		b=x/10%10;
		c=x/100%10;
		printf("3\n");
		printf("%d\n",c);
		printf("%d\n",b);
		printf("%d\n",a);
	}
	else if(10<=x&&x<100){
		a=x%10;
		b=x/10%10;
		printf("2\n");	
		printf("%d\n",b);
		printf("%d\n",a);
	}
	else if(1<=x&&x<10){
		a=x%10;
		printf("1\n");
		printf("%d\n",a);
	}
	return 0;
}

