#include<stdio.h>
int main(){
	int numbers[6]={4,8,15,16,23,42};
	int target;
	int flag=0;
	printf("Please enter a number you wish to find: ");
	scanf("%d",&target);
	
	for(int i=0;i<=5;i++){
		if(numbers[i]==target){
			printf("The Target number %d was found at index %d\n",target,(i+1));
			flag=1;
		}
	}
	if(flag==0){
		printf("The target was not found!");	
	}
	return 0;
}
