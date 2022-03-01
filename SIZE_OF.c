#include<stdio.h>
int main(){
	auto int x=5;
	printf(" size of int :-%d\n",sizeof(x));
	printf("%d\n",x);
	auto char z='a';
	printf("Size of character:-%c\n",sizeof(z));
	printf("%c\n",z);	
	auto float y=5.6;
	printf("Size of float:-%d\n",sizeof(y));
	printf("%f\n",y);
	auto double w=56.3432;
	printf("Size of double:-%d\n",sizeof(w));
	printf("%lf\n",w);
	return 0;
}
