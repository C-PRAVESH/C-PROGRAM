#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	FILE*fp;
	char ch;
	fp=fopen("b:\\file3.txt","w");
	if(fp==NULL){
		printf("UNABLE TO ACCES");
		return 0;
	}
	do{
		ch=getchar();
		fputc(ch,fp);
	}while(ch!=EOF);
	
	fclose(fp);
	
	
	return 0;
}
