#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,*ptr,sum=0;
	printf("ENTER THE NUMBER OF ELEMENT:-\n\a");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL){
		printf("UNABLE TO ALLOCATE THE MEMORY.");
		exit(0);
	}
	printf("ENTER THE ELEMENT IN THE ARRAYL:-");
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
// 		sum+=*(ptr+i);
        sum=sum+*(ptr+i);
	}
	printf("SUM=%d",sum);
	free(ptr);
	return 0;
}
