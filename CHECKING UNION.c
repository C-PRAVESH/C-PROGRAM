#include<stdio.h>
#include<conio.h>
union abc{
	int a;
	char b;
}var;
int main(){
	var.a=66;
	printf("%d\n",var.a);
	printf("%d",var.b);
	return 0;
}
