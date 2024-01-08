#include<stdio.h>
#include<windows.h>
main(){
	int i,j;
	for(i=1;i<10;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		Sleep(200);
		printf("\n");
	}
	
	for(i=10;i>0;i--){
		for(j=1;j<=i;j++){
			printf("*");
		}
		Sleep(200);
		printf("\n");
	}
}