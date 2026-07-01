#include<stdio.h>

int add_nums(int a,int b){
	return a+b;
}
int main(){
	int a,b;
	a=10;
	b=20;
	
	float c=1.8;
	char word='a';
	double d=1.9876542;
	
	//pointers
	int num1=50;
	int *num1_ptr=&num1;
	printf("The num1 variable holds the value: %d\n",num1);
	printf("It is being stored at the adderss: %d\n\n",num1_ptr);
	
	//functions
	printf("The sum of a and b is: %d\n",add_nums(a,b));
	
	//arrays
	int arrays[5]={1,2,3,4,5};
	
	printf("Working with arrays we can see at index 0 we have %d \n",arrays[0]);
	for (int i=0;i<5;i++){
		printf("The element at index %d is %d\n",i,arrays[i]);
	}
	
	//printf statementes and printing the data
	printf("Hello World!\n");
	printf("The sum of two numbers is:%d\n",(a+b));
	printf("The given word is:%c\nThe float value is:%f\nThe Double values is:%lf\n\n",word,c,d);
	
	
	//scanf taking inputs
	int age;
	printf("Please enter your age: ");
	scanf("%d",&age);
	printf("your age is: %d\n\n",age);
	
	
	//condition checking
	float grade=56.87;
	printf("Grade Checking:\nGrade Value:%f\n",grade);
	if(grade>=90){
		printf("Grade A\n");
	}else if(grade>=80){
		printf("Grade B\n");
	}else{
		printf("Grade C\n");
	}
	
	//for loops
	for(int i=0;i<=3;i++){
		printf("Iteration: %d\n",i);
	}
	
	//while loop
	int count=0;
	while(count!=10){
		printf("The Count was updated to: %d\n",count);
		count++;
	}
	return 0;
}
