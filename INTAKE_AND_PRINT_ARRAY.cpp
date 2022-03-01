#include<stdio.h>
#include<conio.h>
int main()
{ int a[5];
for(int q=0;q<5;q++){
printf("enter the values");
scanf("%d",&a[q]);
}
printf("arrey = {");
for( int p=0;p<5;p++)
{
printf("%d\t",a[p]);
 }
 printf("}");
 getch();
 return 0;


}
