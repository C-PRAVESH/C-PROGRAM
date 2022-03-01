#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	printf("ENTER THE NUMBER:-\n");
	scanf("%d",&a);
	for(int i=0;i<11;i++){
		printf("%d x %d = %d\n",a,i,(a*i));
	}
	return 0;
}
