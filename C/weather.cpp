#include<stdio.h>
int main(){
	int temp;
	
	printf("Please enter the number in celcius: ");
	scanf("%d",&temp);
	
	if(temp>=30){
		printf("Its Hot Outside!");
	}else if(temp>=15){
		printf("The Weather is Perfect");
	}else{
		printf("Bring a Jacket!");
	}
	return 0;
}
