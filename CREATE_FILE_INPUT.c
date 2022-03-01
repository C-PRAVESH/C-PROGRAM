#include<stdio.h>
int main(){
    char string[50]="Its me pravesh from KL University";
    FILE *ptr=NULL;
ptr=fopen("text.txt","a");
fprintf(ptr,"\n%s\n",string);
    printf("%s",string);
    return 0;
}
