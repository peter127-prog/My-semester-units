/*
name:peter
reg:CT100/G/26164/25
desc:A do while loop for password
*/
#include<stdio.h>

int main(){
	int password;
	do{
		printf("Enter password \n");
		scanf("%d", &password);
	if(password != 1234){
		printf("incorrect password try again \n");
	}
	
	}while(password !=1234);
	printf("access granted \n");
		
	
	
	
return 0;
}
