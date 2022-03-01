#include<stdio.h>
#include<conio.h>
int main(){
	int a[5];
	printf("ENTER THE 5 ELEMENT:-");
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	int b;
	b=a[0];
	int j,c;
	c=a[0];
	for (j=1;j<5;j++)
{
	if (a[j]>c)
	{
		c=a[j];
	}
	if (a[j]<b)
	{
	b=a[j];	
	}
}
	printf("minimum=%d\tmaximum=%d",b,c);
	return 0;
}
//int main(){
//    int arr[MAX_SIZE];
//    int i, max, min, size;
//    printf("Enter size of the array: ");
//    scanf("%d", &size);
//    printf("Enter elements in the array: ");
//    for(i=0; i<size; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    max = arr[0];
//    min = arr[0];
//    for(i=1; i<size; i++)
//    {
//        if(arr[i] > max)
//        {
//            max = arr[i];
//        }
//        if(arr[i] < min)
//        {
//          min = arr[i];
//        }
//    }
//    printf("Maximum element = %d\n", max);
//    printf("Minimum element = %d", min);
//    return 0;
//}
