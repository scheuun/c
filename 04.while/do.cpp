#include<stdio.h>
main(){
	int value;
	printf("below 10");
	do{
		scanf("%d",&value);
	}while(value<=10);
	printf("over 10");
}