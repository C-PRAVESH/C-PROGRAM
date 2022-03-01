#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char *str,a;
	str=(char*) malloc(10);
	strcpy(str,"pravesh");
	printf("THE NAME:-%s\tADDRESS=%u\n",str,&str);
	str=(char *) realloc(str,25);
	strcat(str,".com");
	printf("STRING:-%s\t ADDRESS:-%u",str,&str);
	free(str);

	return 0;
}
