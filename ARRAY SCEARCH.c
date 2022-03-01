#include<stdio.h>
int main(){
	int a[4]={1,2,3,4};
printf("enter the a number to scearch :-\n");
int i, b,count=0;
scanf("%d",&b);
	for (i=0;i<=2;i++){ 
 	if(b==a[i]){
 		count++;
	 }	
	}
	if(count==0) printf("not found");
	else printf("found");
	return 0;
}
