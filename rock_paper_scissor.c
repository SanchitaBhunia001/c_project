#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int choice , com_choice;
	
	printf("\n 1.rock \n 2.paper \n 3.scissor\n");
	printf("enter your choice:-");
	scanf("%d",&choice);
	
	srand(time(NULL));
	com_choice=rand()%3+1;
	
	if(choice<1|| choice>3){
		printf("you choose wrong number");
		exit (0);
	}
	
	printf("\n your choice is:-%d",choice);
	printf("\n computer choice is:-%d",com_choice);
	
	
	if(choice==com_choice){
		printf("\n its a draw");
	}
	else if((choice==1&& com_choice==3)||(choice==2&& com_choice==1)|| (choice==3 && com_choice==2)){
		printf("\n you win");
	}
	else{
		printf("\n computer win");
	}
	
}
