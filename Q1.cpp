#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],b[3][3],c,m1,m2,w;
	printf("ENTER THE INTEGER WHICH MULTIPLY MARTIX A:-\n");
	scanf("%d",&m1);
	printf("ENTER THE MARTIX A:-\n");
	for(int q=0;q<3;q++)
	{
		for(int w=0;w<3;w++)
		{                                       //take element A
			scanf("%d",&a[q][w]);
		}
		
	}
			printf("MARTIX A=\n");
			int u6,i6;                                                                  
	for( u6=0;u6<3;u6++)                                       //print element of b
	{
		for( i6=0;i6<3;i6++)
		{
			printf("%d\t",a[u6][i6]);
		}
		printf("\n");
		
	}

	

	int d[3][3],k,l; 
	for (k=0;k<3;k++)                          //multiply martx a by 3
	{
		for (l=0;l<3;l++)
		{
		d[k][l]= m1*a[k][l];	
		}
	}
	printf("%d*Martix A =\n",m1);
	int h,j;
	for (h=0;h<3;h++)                     //print multiplied martix of a
	{
		for( j=0;j<3;j++)
		{
			printf("%d\t",d[h][j]);
		}
		printf("\n");
		
	}
	printf("ENTER THE INTEGER WHICH MULTIPLY MARTIX B:-\n");
	scanf("%d",&m2);
	printf("ENTER THE MARTIX B:-\n");                         //take element b
	int t,y;
	for( t=0;t<3;t++)
	{
		for(y=0;y<3;y++)
		{
			scanf("%d",&b[t][y]);
		}
	}

		printf("MARTIX B=\n");
			int u,i;                                                                  
	for( u=0;u<3;u++)                                       //print element of b
	{
		for( i=0;i<3;i++)
		{
			printf("%d\t",b[u][i]);
		}
		printf("\n");
		
	}
	
	int  z[3][3],f,g1;                        //multipe m2 to marix b
	for (f=0;f<3;f++)
	{
		for (g1=0;g1<3;g1++)
		{
		z[f][g1]= m2* b[f][g1];	
		}
	}
	printf("%d*martix2\n",m2);
	int m4,n;
	for (m4=0;m4<3;m4++)
	{
		for(n=0;n<3;n++)                         // print multipied martix b
		{
			printf("%d\t",z[m4][n]);
		}
		printf("\n");
	}
int g[3][3],c1,v,i1;
printf("ENTER THE MULTIPLE OF I:-\n");
scanf("%d",&i1);
for( c1=0;c1<3;c1++)
{
	for(v=0;v<3;v++)
	{
		if(v==c1)
		 {
		 
		 g[c1][v]=1*i1;
	     }
	     else
	     {
	     	g[c1][v]=0;
		 }
	}
}
	int m3,n2;
	for (m3=0;m3<3;m3++)
	{
		for(n2=0;n2<3;n2++)                         // print multipied martix i
		{
			printf("%d\t",g[m3][n2]);
		}
		printf("\n");
	}
	char op;
	printf("ENTER THE OPERATOR BETWEEN 1ST AND 2ND TERM:-");
	scanf("%s",&op);
	int m[3][3],q1,w1;
	for(q1=0;q1<3;q1++)
	{
	for(w1=0;w1<3;w1++)
	{
		switch(op)
		{
		  case '+':m[q1][w1]=d[q1][w1]+z[q1][w1];
		  break;
		  case '-' :m[q1][w1]=d[q1][w1]-z[q1][w1];
		  break;
		  case '*':m[q1][w1]=d[q1][w1]*z[q1][w1];
		  break;
		  case '/':m[q1][w1]=d[q1][w1]/z[q1][w1];
		  break;
		  case '%':m[q1][w1]=d[q1][w1]%z[q1][w1];	
		  break;
		  default:printf("invalid input");
	    }	
	}
}


int e[3][3],q4,w4;
char op2;
printf("ENTER THE OPERATOR BETWEEN 2ST AND 3ND TERM:-");
	scanf("%s",&op2);
	
	for(q4=0;q4<3;q4++)
	{
	for(w4=0;w4<3;w4++)
	{
		switch(op2)
		{
		  case '+':e[q4][w4]=m[q4][w4]+z[q4][w4];
		  break;
		  case '-' :e[q4][w4]=m[q4][w4]-z[q4][w4];
		  break;
		  case '*':e[q4][w4]=m[q4][w4]*z[q4][w4];
		  break;
		  case '/':e[q4][w4]=m[q4][w4]/z[q4][w4];
		  break;
		  case '%':e[q4][w4]=m[q4][w4]%z[q4][w4];	
		  break;
		  default:printf("invalid input");
	    }	
	}
}
	int e2,r2;
	for(e2=0;e2<3;e2++)
	{
		for(r2=0;r2<3;r2++)
		{
			printf("%d\t",e[e2][r2]);
		}
		printf("\n");
	}
	
return 0;
}
