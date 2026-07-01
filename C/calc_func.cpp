#include<stdio.h>
#include<stdlib.h>
void calc_func(int a,int b,char operation){
	if(operation=='+'){
		printf("\nThe Addition of Given Numbers is: %d\n\n",(a+b));
	}else if(operation=='-'){
		printf("\nThe Subtraction of Given Numbers is: %d\n\n",(a-b));
	}else if(operation=='*'){
		printf("\nThe Multiplication of Given Number is: %d\n\n",(a*b));
	}else if(operation=='/'){
		if(b==0){
			printf("\nThe value of B should not be 0");
		}else{
			printf("\nThe Division of Given Number is: %d\n\n",(a/b));
		}
	}
	while (getchar() != '\n');
	char c;
	printf("please enter any button to continue");
	scanf("%c",&c);
	system("cls");
}

int main(){
	int a,b,option;
	while(true){
		printf("A simple calulator function:\n\n");
		a=0;
		b=0;
		option=0;
		printf("Please enter the number for a: ");
		scanf("%d",&a);
		printf("Please enter the number for b: ");
		scanf("%d",&b);
		printf("\nPlease choose which operation you would like to perform:\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\nPress 5 to exit\nEnter a valid choice(1-5): ");
		scanf("%d",&option);
		
		switch(option){
			case 1:
				calc_func(a,b,'+');
				break;
			case 2:
				calc_func(a,b,'-');
				break;
			case 3:
				calc_func(a,b,'*');
				break;
			case 4:
				calc_func(a,b,'/');
				break;
			case 5:
				printf("Exiting the program!!");
				exit(0);
			default:
				printf("please enter a valid choice\n");
				break;
		}
	}
	return 0;	
}
