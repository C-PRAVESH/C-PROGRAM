#include<stdio.h>
#include<conio.h>
int main(){
	int a[6];
	printf("ENTER THE ELEMENT FIVE ELEMENT:-");
	for(int i=0;i<6;i++){
	scanf("%d",&a[i]);}
	int q,p;
	printf("ENTER THE KEY:-\n");
	scanf("%d",&q);
	for(int i=1;i<=6;i++)
	{
		if (q==a[i])
		{
			printf("%d is found %d position of array",q,i);
			break;
		}
		else 
		printf("not found");
		
	}

	return 0;
}

