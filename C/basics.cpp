#include<stdio.h>
int main(){
	int a,b;
	a=10;
	b=20;
	
	float c=1.8;
	char word='a';
	double d=1.9876542;
	
	printf("Hello World!\n");
	printf("The sum of two numbers is:%d\n",(a+b));
	printf("The given word is:%c\nThe float value is:%f\nThe Double values is:%lf\n\n",word,c,d);
	
	int age;
	printf("Please enter your age: ");
	scanf("%d",&age);
	printf("your age is: %d\n\n",age);
	
	float grade=56.87;
	printf("Grade Checking:\nGrade Value:%f\n",grade);
	if(grade>=90){
		printf("Grade A\n");
	}else if(grade>=80){
		printf("Grade B\n");
	}else{
		printf("Grade C\n");
	}
	
	for(int i=0;i<=3;i++){
		printf("Iteration: %d\n",i);
	}
	
	int count=0;
	while(count!=10){
		printf("The Count was updated to: %d\n",count);
		count++;
	}
	return 0;
}
