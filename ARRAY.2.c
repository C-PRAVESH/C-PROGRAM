#include<stdio.h>
int main(){
	int a[2],i,add=0;
	
	for (i=0;i<=2;i++){
	printf("ENTER THE SUBJECT MARK:-\n");
	scanf("%d",&a[i]);
	}
	for (i=0;i<=2;i++) {
		printf("%10d",a[i]);
	add=add+a[i];}
	float avg=add/3;
	printf("total mark = %d",add);
	printf("avg = %f",avg);
	return 0;
}
