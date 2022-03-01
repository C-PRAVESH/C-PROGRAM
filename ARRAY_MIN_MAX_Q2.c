//input:
//Enter elements in array: 1
//2
//3
//4
//5
//output:
//minimum of an array is: 1
//maximum of an array is: 5
#include<stdio.h>
int main(){
	int i,a[5],b,c;
	printf("Enter elements in array: ");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	b=a[1];
	c=a[0];
	for(i=1;i<10;i++){
		if(b<a[i]){
a[i]=b;
		}
		if(c>a[i]){
			a[i]=c;
		}
	}
	printf("minimum of an array is: %d\n",c);
	printf("maximun os an array is: %d",b);
	return 0;
}


