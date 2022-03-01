#include<stdio.h>
int main(){
int i;
    int a[10],b=0;
    for( i=0;i<10;i++)
    { 
        scanf("%d",&a[i]);
       
    }
    for( i=0;i<10;i++){
         b=b+a[i];
    }
    printf("%d\n",b);
    printf("case sum");
    
    return 0;
}
