#include<stdio.h>
#include<conio.h>
int main(){
	int a,b=0,i;
	printf("ENTER THE NUMBER TO FIND PRIME OR NOT:-\n");
	scanf("%d",&a);
	for (i=2;i<=a/2;i++){
		if(a%2==0){
			b++;
		}
	}
if(b==0){
	printf("Prime");
}
else{
	printf("NON PRIME");
}
return 0;
}
