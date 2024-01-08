#include<stdio.h>
#include<windows.h>
#include<conio.h>

void call(void);
void print_num(int x);
int print_sum(int y);

void call(void){
	Sleep(1000);
	printf("------------\n");
	printf("print num \n");
	printf("------------\n");
}

void print_num(int x){
	Sleep(1000);
	int i;
	for(i=1;i<=x;i++){
		printf("%d",i);
	}
}

int print_sum(int y){
	int i,sum=0;
	for(i=1;i<=y;i++){
		sum=sum+i;
	}
	return sum;
}

int main(void){
	int result,my_num,result2;
	call();
	print_num(10);
	result=print_sum(3);
	printf("sum 3: %d \n",result);
	printf("sum my_num");
	scanf("%d",&my_num);
	result2=print_sum(my_num);
	printf("sum %d: %d \n",my_num,result2);
	
	getch();
	return 0;
}