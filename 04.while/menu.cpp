#include<stdio.h>
main(){
	int menu;
	do{
		printf("\n");
		printf("select menu\n\n");
		printf("***** menu *****\n");
		printf("1. pork \n");
		printf("2. beef \n");
		printf("3. chicken \n");
		printf("4. fish \n");
		scanf("%d",&menu);
	}while(menu<1 || menu>4);
	printf("menu is [%d].\n\n",menu);
	switch(menu){
		case 1:
			puts("select pork.");break;
		case 2:
			puts("select beef.");break;
		case 3:
			puts("select chicken.");break;
		case 4:
			puts("select fish.");break;
	}
}