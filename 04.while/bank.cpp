#include<stdio.h>
main() {
	int x,more;
	do{
		puts("select category");
		puts("1:deposit, 2:withdrawal, 3:transfer, 4:check");
		scanf("%d",&x);
		switch(x){
			case 1:
				puts("select deposit.");break;
			case 2:
				puts("select withdrawal.");break;
			case 3:
				puts("select transfer.");break;
			case 4:
				puts("select check.");break;
			defalut:
				puts("nothing");break;
			}
		puts("continue [1]. stop [2]");
		scanf("%d", &more);
	}while(more==1);
}