#include<stdio.h>
main(){
	int x;
	do{
	puts("select 1, 2, 3");
	scanf("%d",&x);
	if(x<=3){
		if(x==1)
			puts("select 1");
		else if(x==2)
			puts("select 2");
		else
			puts("select 3");
	}
	else
		puts("select 1~3");
	}while(x<1 || x>3);
	printf("good");
}