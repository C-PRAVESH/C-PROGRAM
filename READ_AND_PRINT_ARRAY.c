#include<stdio.h>
#include<conio.h>
int main(){
	printf("ENTER THE SIZE OF THE ARRAY:-\t");
	int a[100],b,i;
	scanf("%d",&b);
	printf("ENTER %d ELEMENTS :-\t",b);
	for (i;i<b;i++){scanf("%d",&a[i]);}
	printf("THE ELEMENT PRESENT IN ARRAY:-\t");
	for(i=0;i<b;i++){printf("%d\t",a[i]);}
	return 0;
}
