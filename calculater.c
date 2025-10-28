#include<stdio.h>

int sum(int a , int b){
	  return a+b;	
}

int sub(int a, int b){
	return a-b;
}

int mul(int a, int b){
	return a*b;
}

int divi(int a, int b){
	return a/b;
}

int mod(int a, int b){
	return a%b;
}

int main(){
	int choice,num1, num2,result;
	
	do{
		
	printf("\n 1.addtion \n 2.substraction \n 3.multiplication \n 4.division \n 5.Modulas\n ");
	printf("press any others key for exit");
	printf("\n enter your choice:-");
	scanf("%d",&choice);
	
	if(choice<1|| choice>5){
		printf("bye bye");
		return 0;
	}
	
	    printf("enter first number:-");
		scanf("%d",&num1);
		printf("enter second number:-");
		scanf("%d",&num2);
	
	switch(choice){
		
		case 1:
			
			result=sum(num1,num2);
			printf("the sum is:-%d",result);
			break;
			
		case 2 : 
		    
			result=sub(num1,num2);
			printf("the substraction result is:-%d",result);
			break;
		
		case 3:
			
			result=mul(num1,num2);
			printf("the  result multiplication is:-%d",result);
			break;
			
		case 4 :
			
			if(num2==0){
				printf("cannot divided by 0");
				
			}
			else{
				result=divi(num1, num2);
			printf("the division result is:-%d",result);
		
			}
			
			break;
			
		case 5 :
			if(num2==0){
				printf("cannot module by 0");
				
			}
			else{
				result=mod(num1, num2);
			printf("the Modulas result is:-%d",result);
			
			}
			
			break;			
	}	
}while(1);
	return 0;
	
	
}
