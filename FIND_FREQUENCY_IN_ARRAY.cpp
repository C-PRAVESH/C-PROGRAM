//wrie a c progrm to find the frequency of a patcular number in list of intierger
#include<stdio.h>
#include<conio.h>
int main(){
	int a[100];
	printf("ENTER THE NUMBER OF ELEMENT:-");
	int b;
	scanf("%d",&b);
	printf("ENTER THE %d ELEMENT",b);
	for(int i=0;i<b;i++) scanf("%d",&a[i]);
	printf("ENTER THE ELEMENT TO FIND THE FREQUENCY:-");
	int v;
	scanf("%d",&v);
	int found=0;
	for(int g=0;g<b;g++)
	if(v==a[g]){
		found++;
	}
	
	printf("%d",found);
	return 0;
}
