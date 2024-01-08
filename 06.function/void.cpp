#include<stdio.h>
void hi(void);
int input_num(int n);

void hi(void){
	printf("hi \n");
};

int input_num(int n){
	int sum;
	printf("num is %d \n",n);
	sum=n+n;
	return sum;
};

int main(void){
	int x,hap;
	hi();
	printf("input num \n");
	scanf("%d",&x);
	hap=input_num(x);
	printf("sum is %d \n",hap);
	hi();
	return 0;
}