#include<stdio.h>
int main(){
	int a,*p;
	a=10;
	int **pp=&*p;;
	p=&a;
	printf("%d",p);
	printf("%d",*p);
	printf("%d",**pp);
	return 0;
}
