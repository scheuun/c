#include<stdio.h>
main(){
	int value;
	printf("Did you eat an meal?\n");
	printf("full 1, hungry 2 \n");
	scanf("%d",&value);
	while(value==1){
		printf("bad\n");
		value=value+1;
	}
	printf("bye");
}