//In this project you should do the following operations
//
//create a new account.
//
//update information of an existing account.
//
//view and manage transactions,
//
//check the details of an existing account.
//
//remove existing account and
//
//view customers list.
//
//Listed below are some of the more important functions which may help you understand the project better
//
//menu () This function displays the menu or welcome screen to perform different banking activities mentioned below
//
//new_acc () This function creates a new customer account It asks for some personal and banking
//details of the customer such as name, date of birth citizenship number address and phone number You can enter
//the amount to deposit and choose one type of deposit account saving, current fixed for year fixed for 2 years
//or fixed for 3 years
//
//viewlist (): With this function, you can view the customer's banking information such as account number
//name, address and phone number provided while
//
//creating the account.
//
//edit (): This function has been used for changing the address number of a particular customer account
//
//and phone
//
//transact () With this function you can deposit and withdraw money to and from a particular customer account
//
//erase () This function is for deleting customer account
//
//see(): This function shows account number name date of birth citizenship number age, address, 
//phone number type of account amount deposited and date of deposit. It also displays the amount of interest
//corresponding to a particular account type
//========================================================================================================================
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int reset(int);
int menu();
int new_acc( int b );
int view_list();
int edit();
int transact();
int erase();
int see();
///new_acc () This function creates a new customer account It asks for some personal and banking
//details of the customer such as name, date of birth citizenship number address and phone number You can enter
//the amount to deposit and choose one type of deposit account saving, current fixed for year fixed for 2 years
//or fixed for 3 years
struct date{
	int day;
	int month;
	int year;
};
struct address{
	int door_no;
	char street[100];
	char area[100];
	char distict[100];
	char state[10];
	long int pin;
};
struct account{
	char name[50];
	struct date date;
	int cs_no;
	struct address address;
	}c[100];
int main(){
	 int a=1,b,w;
	 reset(a);
		while(a<1000){
//			for (a=0;a<1000;a++){
//				strcpy(c[a].name,"NA");
//				c[a].date=0;
//				c[a].cs_no=0;
//				strcpy(c[a].address.area,"NA");
//				strcpy(c[a].address.distict,"NA");
//				strcpy(c[a].address.)
//			}
		printf("============================================================================================\n");
		printf("\t\t\t\tBANK WINDOW\t\t\t\t\n");
		printf("============================================================================================\n");
		printf("\nSELECT THE OPTION IN THE BELOW:-\t\n");
		printf("1-FOR NEW USERS.\n");
		printf("2-REMOVE EXISTING USER.\n");
		printf("3-EDITING THE EXISTING USER.\n");
		printf("4-VIEW THE CUSTOMER LIST.\n");
		scanf("\a%d",&b);
		switch(b){
			case 1: new_acc(a);
					a++;
				   break;
			case 2 : erase(a);
					a++;
					break;
//				   
				
		
	
	
}

}
return 0;
}


	int new_acc(int a){
	struct account c[a];
	int b;
	system("cls");
		printf("============================================================================================\n");
	printf("\t\t\t\t\tENTER THE DETAILS\n");
		printf("============================================================================================\n");
//	scanf("%d",&b);	
		printf("ENTER THE NAME:-");
		scanf("%s",c[a].name);
		printf("ENTER THE DOB:\n");
		printf("DATE:-");
		scanf("%d",&c[a].date.day);
		printf("MONTH:-");
		scanf("%d",&c[a].date.month);
		printf("YEAR:-");
		scanf("%d",&c[a].date.year);
		printf("ENTER THE ADDRESS.");
		printf("ENTER THE DOOR NO:-");
		scanf("%d",c[a].address.door_no);
		printf("ENTER THE STREET NAME:-");
		scanf("%s",&c[a].address.street);
		printf("ENTER THE AREA NAME:-");
		scanf("%s",&c[a].address.area);
		printf("ENTER THE DISTICT:-");
		scanf("%s",&c[a].address.distict);
		printf("ENTER THE STATE:-");
		scanf("%s",&c[a].address.state);
		printf("ENTER THE PIN CODE:-");
		scanf("%d",c[a].address.pin);
		printf("DONE");
		return 0;
	}
	int reset(int a){
				for (a=0;a<1000;a++){
				strcpy(c[a].name,"NA");
				c[a].date.day=0;
				c[a].cs_no=0;
				strcpy(c[a].address.area,"NA");
				strcpy(c[a].address.distict,"NA");
				strcpy(c[a].address.street,"NA");
				strcpy(c[a].address.state,"NA");
				c[a].address.door_no=0;
				c[a].address.pin=0;
				return 0;
			}
}
	int erase(int a)
	{
		printf("ENTER THE ACCOUNT NO:-");
		struct account c[a];
		int i, e;
		char input[5];
		scanf("%d",&e);
		for( i;i<1000;i++){
		if (e==a)
		printf("ACCOUNT NAME:- %s",c[a].name);	
		printf("ACCOUNT NUMBER:-%d",e);
		printf("ACCOUNT CS NO:-%d",c[a].cs_no);
		printf("ACOUNT ADDRESS:-%d, %s ,%s \n%s ,%s ,%ld ",c[1].address.door_no,c[a].address.street,c[a].address.area,c[a].address.distict,c[a].address.state,c[a].address.pin);
		printf("PRESS ENTER Y TO REMOVE THE ACCOUNT IF NO THEN PRESS N.");
		scanf("%s",input);
		if (input=='Y'&&input=='y'){
			
		}
		
		else 
		return 0;
		}
		
	}
	
