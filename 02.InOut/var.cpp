#include<stdio.h>
main(){
	char mw;
	char name[10];
	int age;
	puts("gender (man:m,woman:w)");
	scanf("%c",&mw);
	puts("name:");
	scanf("%s",&name);
	puts("age");
	scanf("%d",&age);
	printf("your name:%s, gender:%c, age:%d",name,mw,age);
}