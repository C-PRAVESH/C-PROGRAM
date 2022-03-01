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
//int reset(int a);
//void menu();// done
void new_acc();// done 
void view_list();// done 
void edit();//done 
void transact();
void erase();//done
void see();//done
void daposit();


int count=1;
int bank_mode=0;
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
	int no;
	char name[50];
	struct date date;
	int cs_no;
	struct address address;
	int amt;
	}c[100];
int main(){
		int in;
//reset();	
 int a=1,b,w;
		do{
			system("cls");
		printf("============================================================================================\n");
		printf("\t\t\t\tBANK WINDOW\t\t\t\t\n");
		printf("============================================================================================\n");
		printf("\nSELECT THE OPTION IN THE BELOW:-\t\n");
		printf("1-FOR NEW USERS.\n");
		printf("2-REMOVE EXISTING USER.\n");
		printf("3-EDITING THE EXISTING USER.\n");
		printf("4-VIEW THE CUSTOMER LIST.\n");
		printf("5-SEE THE ACCOUT INFORMATION");
		printf("5-SEE THE COUNT DETAILS\n");
		printf("6-TRNSACT THE AMOUNT");
		printf("7-DEPOSIT");
		printf("SELECT THE OPTION:-\n");
		scanf("%d",&b);
		switch(b){
			case 1: new_acc();
					a++;
				   break;
			case 2 :erase();
					a++;
					break;
			case 3: edit();
					break;
			case 4: view_list();
					break;
			case 5: see();
					break;
			case 6:transact();
					break;
			case 7: daposit();
					break;
			case 8:exit(0);
					break;
					
			default:printf("INVALID STATEMENT.");
	
}
a++;
}while(a<1000);

}
	void new_acc(){
	system("cls");
		printf("\n============================================================================================\n");
	printf("\t\t\t\t\tPERSONAL DETALS\n");
		printf("============================================================================================\n");
		c[count].no=count;	
		printf("ENTER THE NAME:-");
		scanf("%s",c[count].name);
		printf("ENTER THE CITEGENSHIP NUMBER:-\n");
		scanf("%d",&c[count].cs_no);
		printf("ENTER THE DOB:\n");
		printf("DATE:-");
		scanf("%d",&c[count].date.day);
		printf("MONTH:-");
		scanf("%d",&c[count].date.month);
		printf("YEAR:-");
		scanf("%d",&c[count].date.year);
		printf("ENTER THE ADDRESS.");
		printf("ENTER THE DOOR NO:-");
		scanf("%d",&c[count].address.door_no);
		printf("ENTER THE STREET NAME:-");
		scanf("%s",c[count].address.street);
		printf("ENTER THE AREA NAME:-");
		scanf("%s",c[count].address.area);
		printf("ENTER THE DISTICT:-");
		scanf("%s",c[count].address.distict);
		printf("ENTER THE STATE:-");
		scanf("%s",c[count].address.state);
		printf("ENTER THE PIN CODE:-");
		scanf("%d",&c[count].address.pin);
		printf("DONE");
		system("cls");
		printf("\n============================================================================================\n");
		printf("\t\t\t\t\tBANK DETAILS\n");
		printf("============================================================================================\n");
		printf("WHICH BANKING NEEDED\n");
		printf("1-SAVING ACCOUNT.\n");
		printf("2-CURRENT ACCOUNT.\n");
		printf("3-LOAN ACCCOUNT.\n");	
		scanf("%d",&bank_mode);
		if(bank_mode>3){
			printf("INVALID BANK MODE");
		}
		else{
			printf("DONE");
		}
		printf("THE ACCOUNT NO IS %d\n",count);
		printf("ENTER TYE AMOUNT TO ADD IN ACCOUNT:-");
		scanf("%d",&c[count].amt);
	
		count ++;
			}
	void erase(){
			int i,e;
	  		char input;
			printf("============================================================================================\n");
			printf("\t\t\t\tEARSE WINDOW\n");
			printf("============================================================================================\n");
			printf("ENTER THE ACCOUNT NO:-\t if go back then enter N");
			scanf("%d",&e);
            if(e=='N'){
                printf("GO BACK");
            }
            else{
			for( i=0;i<1000;i++){
			if (e==count){
			printf("ACCOUNT NAME:- %s\n",c[e].name);	
			printf("ACCOUNT NUMBER:-%d\n",e);
			printf("ACCOUNT CS NO:-%d\n",c[e].cs_no);
			printf("ACOUNT ADDRESS:-%d, %s ,%s \n%s ,%s ,%ld\n ",c[e].address.door_no,c[e].address.street,c[e].address.area,c[e].address.distict,c[e].address.state,c[e].address.pin);
			printf("PRESS ENTER Y TO REMOVE THE ACCOUNT IF NO THEN PRESS N.\n");
			scanf("%c",input);
		if (input=='y'||input=='Y'){
			printf("removed");
			strcpy(c[e].name,"NULL");
			strcpy(c[e].address.area,"NULL");
			strcpy(c[e].address.distict,"NULL");
			strcpy(c[e].address.street,"NULL");
			strcpy(c[e].address.state,"NULL");
			c[e].cs_no=0;
			c[e].no=0;
			c[e].date.day=0;
			c[e].date.month=0;
			c[e].date.year=0;
		}
		else{
			printf("NOT REMOVED");
		}
		printf("ACCOUNT HAS BEEN REMOVED");
            }
		
}
getch();
	}
}	

	void edit(){
		int na=0;
				printf("============================================================================================\n");
			printf("\t\t\t\tACCOUNT NO CHANGING WINDOW\n");
			printf("============================================================================================\n");
		printf("ENTER THE ACCOUNT NUMBER:-\n");
		scanf("%d",&na);
		printf("---------------------------------------------------------------------------------------------------\n");
			printf("ACCOUNT NO:-\t%d\n",na);
			printf("ACCOUNT NAME:-\t%s\n",c[na].name);
			printf("ACCOUNT CS NO:-\t%d\n",c[na].cs_no);
			printf("ACOUNT ADDRESS:-\t%d, %s ,%s \n%s ,%s ,%ld\n ",c[na].address.door_no,c[na].address.street,c[na].address.area,c[na].address.distict,c[na].address.state,c[na].address.pin);
			printf("---------------------------------------------------------------------------------------------------\n");
			printf("ENTER THE Y IF THE INFORMATION IS RIGHT.");
			char y;
			scanf("%c",&y);
			if(y=='y'||y=='Y'){
			printf("ENTER THE NEW PASSWORD:-\t");
			int nw=0;
			scanf("%d",&nw);
			if(c[nw].cs_no!=0){
				printf("ACCOUNT EXIST.");
				printf("\nCANNOT CHANGE THE PASSWORD");
				getch();
			}
			else{
				
				strcpy(c[nw].name,c[na].name);
				strcpy(c[nw].address.area,c[na].address.area);
				strcpy(c[nw].address.distict,c[na].address.distict);
				strcpy(c[nw].address.state,c[na].address.state);
				strcpy(c[nw].address.street,c[na].address.street);
				c[nw].cs_no=c[na].cs_no;
				c[nw].date.day=c[na].date.day;
				c[nw].date.month=c[na].date.month;
				c[nw].date.year=c[na].date.year;
				printf("PASSWORD CHANGE.");
				getch();
			
			}
		}
	
	
	};
	void see(){
		system("cls");
		int ac=0;
		printf("Enter account number");
		scanf("%d",&ac);
		printf("Account no:-%d\n",c[ac].no);
		printf("Account name:-%s\n",c[ac].name);
		printf("Account CS no:-%d\n",c[ac].cs_no);
		printf("Account user Date of Birth:-%d-%d-%d-%d\n",c[ac].date.day,c[ac].date.month,c[ac].date.year);
		printf("AMOUNT PRESENT IN ACOUNT IS:-%d",c[ac].amt);
		getch();
	};
	void transact(){
		int send,recive,amount;
		printf("ENTER THE YOUR ACCOUNT NUMBER:-");
		scanf("%d",&send);

		printf("ENTER THE RECEVER ANNOUNT NO:-");
		scanf("%d",&recive);
		printf("ENTER THE AMMOUNT TO TRANSACT:-");
		scanf("%d",&amount);
//		if (amount<c[send].amt){
			c[send].amt-amount;
			c[recive].amt+amount;
			printf("ACCOUNT TRANSFER\n");
//		}
//		else{
//			printf("INSUFFICENT BALANCE");
//		}
//		printf("ACTION DONE");
		getch();		
	};		
	void view_list(){
		 int in;
		for(in=1;in<count;in++){
			printf("---------------------------------------------------------------------------------------------------\n");
			printf("ACCOUNT NO:-\t%d\n",in);
			printf("ACCOUNT NAME:-\t%s\n",c[in].name);
			printf("ACCOUNT CS NO:-\t%d\n",c[in].cs_no);
			printf("ACOUNT ADDRESS:-\t%d, %s ,%s \n%s ,%s ,%ld\n ",c[in].address.door_no,c[in].address.street,c[in].address.area,c[in].address.distict,c[in].address.state,c[in].address.pin);
			printf("ACCOUNT AMOUNT:-%d\n",c[in].amt);
		}
		printf("END LIST");
		getch();
	};
void daposit(){
	printf("ENTER THE SCCOUNT NUMBER TO DEPOSITE");
	int acc;
	scanf("%d",&acc);
	printf("ACCOUNT :- %s",c[acc].name);
	printf("ENTER THE AMOUNT TO DEPOSIT:-\n");
	int amt;
	scanf("%d",&amt);
	c[acc].amt+amt;
	printf("UMPDATED AMOUNT:-%d",c[acc].amt);
}



	
	
	
	
