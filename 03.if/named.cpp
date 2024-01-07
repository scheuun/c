#include<stdio.h>
main(){
	char name[10];
	int select;
	printf("name:");
	scanf("%s",&name);
	printf("name is [%s]. \n true 1, false 2", name);
	scanf("%d",&select);
	if(select==1)
		printf("%s is true",name);
	else
		printf("%s is false",name);
}