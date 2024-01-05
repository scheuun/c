#include<stdio.h>
main(){
	int num1,num2,sum;
	printf("input nums");
	scanf("%d%d",&num1,&num2);
	printf("sum:[%d] \n",num1+num2);
	printf("sub:[%d] \n",num1-num2);
	printf("mul:[%d] \n",num1*num2);
	printf("avg:[%f] \n",((float)num1+(float)num2)/2);
	printf("div:[%d] \n",num1/num2);
	printf("rem:[%d] \n",num1%num2);
}