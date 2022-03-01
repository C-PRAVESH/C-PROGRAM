#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct person{
	struct body{
		int hi;
		int wt;
		float bmi;
	}body;
	struct marks{
		int c12,c10,degree;
	}marks;
	int rank;
	char name[100];
	int age;
};
int main(){
    char s[50];
	struct person p1;
	p1.body.hi=150;
	p1.body.wt=70;
	p1.body.bmi=26.5;
	p1.marks.c10=650;
	p1.marks.c12=720;
	p1.marks.degree=950;
	p1.rank=39;
	gets(s);
	strcpy(p1.name,s);
// 	scanf("%[^\n]%*c",p1.name);
	printf("%d\n",p1.body.hi);
	printf("%d\n",p1.body.wt);
	printf("%f\n",p1.body.bmi);
	printf("CLASS 10 :-%d\n",p1.marks.c10);
	printf("CLASS 12:- %d\n",p1.marks.c12);
	printf("DEGREE :-%d\n",p1.marks.degree);
	printf("%d\n",p1.rank);
	printf("%s\n",p1.name);
	return 0;
	
	 
}
