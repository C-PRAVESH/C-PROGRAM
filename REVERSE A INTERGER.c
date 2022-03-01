//REVERSE AN INTERGER
#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	printf("ENTER THE NUMBER TO REVERSE;-\n");
	scanf("%d",&a);
	int i,n,temp;
	while (a>0){
		n=a%10;
		temp=temp*10+n;
		a=a/10;
		
	}printf("%d",temp);
	return 0;
}
