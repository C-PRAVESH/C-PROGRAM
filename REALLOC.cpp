#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
		int *ptr;
	printf("ENTER THE NUMBER OF ELEMENT IN THE ARRAY:-\n");
	int b;
	scanf("%d",&b);
	ptr=(int*)calloc(b,	sizeof(int));
	for(int i=0;i<b;i++){
		printf("ENTER THE %d VALUE:-\n",i);
		scanf("%d",&ptr[i]);
	}
	for(int i=0;i<b;i++){
		printf("ENTER THE %d VALUE IS %d\n",i,ptr[i]);
		}
		printf("ENTER THE NEW SIZE OF THE ARRAY:-\n");
		scanf("%d",&b);
		for(int i=0;i<b;i++){
		printf("ENTER THE %d VALUE:-\n",i);
		scanf("%d",&ptr[i]);
	}
	for(int i=0;i<b;i++){
		printf("ENTER THE %d VALUE IS %d\n",i,ptr[i]);
		}
	return 0;
}
