#include<stdio.h>
#include<conio.h>
int main(){
	int a[2][2],b[2][2],c[2][2];
	printf("ENTER THE 4 ELEMENT OF MARTIX A:-");
		for (int i,j=0;j<2;j++)
	for (i=0;i<2;i++){
		scanf("%d",&a[j][i]);
	}
	printf("ENTER THE 4 ELEMENT OLF MARTIX B:- ");
	for (int i,j=0;j<2;j++)
	for (i=0;i<2;i++){
		scanf("%d",&b[j][i]);
	}
	for (int i,j=0;j<2;j++)
	{
 	for (i=0;i<2;i++)
	{
		c[j][i]=a[j][i]+b[j][i];
		printf("%d\t",c[j][i]);
	}
	printf("\n");
    }
}
	

