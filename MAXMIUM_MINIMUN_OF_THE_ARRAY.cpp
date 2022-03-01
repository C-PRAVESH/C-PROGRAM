#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	int b=a[0],c=a[0];
	for (int i=0;i<5;i++)
	if(c<a[i])
	c=a[i];
	for (int j=0;j<5;j++)
	if (b>a[j])
	b=a[j];
printf("%d and %d",b,c);
return 0;
}
//write a c program to printf the number expect maximun and minimun value 
//#include<stdio.h>
//#include<conio.h>
//int main(){
//	int a[5]={1,2,3,4,5};
//		intb,c;
//	for (int i=0;i<5;i++)
//	if(c<a[i])
//	c=a[i];
//	if (b>a[i])
//	b=a[i];
//	for (int j;j<5;j++)
//	if (a[i]~=b&&a[i]~=c)
//	printf("%d",a[j]);
//	return 0
//}
