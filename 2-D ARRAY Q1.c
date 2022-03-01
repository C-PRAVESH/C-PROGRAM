#include<stdio.h>
#include<conio.h>
int main(){
	char a[50];
int b,i;
int d=0;
	float e;
	float c[3];
	printf("ENTER THE NAME OF THE STUDENT:-");
	scanf("%s",a);
	printf("ENTER THE ID OF THE STUDENT:-");
	scanf("%d",&b);	
	printf("ENTER THE MARK IN THREE SUBJECT:-");
	for(i=0;i<=2;i++){
	scanf("%f",&c[i]);
	}
	for(i=0;i<=2;i++){
	    	d=d+c[i];
	    	
	}
	e=d/3;
	system("cls");
	printf("********************************************\n");
	printf("STUDENT NAME:-			%s\n",a);
	printf("STUDENT ID:-			%d\n",b);
	printf("STUDENT MARK IN THREE SUBJECT:-");
	for (i=0;i<=2;i++) {
	printf("%f\t\n",c[i]);
	}
	printf("STUDENT TOTAL MARK IS :-	%d\n",d);

	printf("STUDENT AVERAGE IS:-		%f\n",e);
		printf("********************************************");
	
	return 0;
}

