#include<stdio.h>
main(){
	int a=10;
	int b=10;
	int c,d;
	
	c=++a;
	d=b++;
	printf("a = 10 ++a %d.\n",c);
	printf("b = 10 b++ %d.\n",d);
}