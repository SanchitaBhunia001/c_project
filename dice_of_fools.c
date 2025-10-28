#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(){
	int number , probability, press, fake_num;
	
	 srand(time(NULL));
	 number=rand()%6+1;
	
	probability=rand()%2;
	 
	 if(probability==0){
	 	fake_num=rand()%6+1;
	 }
	 else{
	 	fake_num=number;
	 }
	 printf("GAME STARTED");
	 printf("\n computer choose number:-%d",fake_num);
	 printf("\n if you think its a  lie press  1 \n if you think its is a truth press 2 ");
	 printf("\npress:-");
	 scanf("%d",&press);
	 
	 switch(press){
	 	case 1:
	 		if(fake_num!=number){
	 			printf("you are right,he lied");
			 }
			 else{
			 	printf("you are wrong,he tell truth");
			 }
			 
			 printf("\nthe number choose by computer is:-%d", number);
			 break;
			 
		case 2 :
		    if(fake_num==number){
		    	printf("you are right, he tell truth");
			}
			else{
				printf("you are wrong,he lied");
			}
			printf("\nthe number choose by computer is:-%d", number);
			break;	
				 
	 }
	 
	 
}
