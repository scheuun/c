#include<stdio.h>
main(){
	float num1,num2;
	float avg;
	printf("1st num:");
	scanf("%f",&num1);
	printf("2nd num:");
	scanf("%f",&num2);
	printf("sum:%.2f \n",num1+num2);
	avg=(num1+num2)/2;
	printf("avg:%f", avg);
}