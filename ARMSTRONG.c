#include<stdio.h>
#include<conio.h>
int main()
{
	printf("ENTER THE NUMBER TO CHECK TO ITS ARMSTRONG OR NOT:-\n");
	int a;
	scanf("%d",&a);
	int b,c,d;
	d=a;
	while(a>0){
		b=a%10;
		c=c*10+b;
		a=a/10;
	}
	printf("%d\n",c);
	if(d==c) printf("ARMSTRONG");
	else printf("NOT ARMSTRONG");
	return 0;
}
