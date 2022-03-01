#include<stdio.h>
int add(int a[]);

int main(){	
float ag;
int i,ad;
	int mark[5]={50,50,50,50,50};
	float avg;
	ad = add(mark);
	avg=ad/5;
	printf("%f\n",avg);
	printf("%d\n",ad);
	return 0;
}
int add(int a[]){
	int b=0,i;
	for( i=0;i<5;i++){
	b=b+a[i];
	}
	return b;
}
