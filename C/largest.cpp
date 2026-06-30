#include<stdio.h>

int find_max(int a,int b){
	int largest=a;
	if(b>a){
		largest=b;
	}
	return largest;
}

int main(){
	int a,b;
	printf("please enter the number for a: ");
	scanf("%d",&a);
	printf("Please enter the numebr for b: ");
	scanf("%d",&b);
	int largest=find_max(a,b);
	printf("The Largest number is: %d",largest);
	return 0;
}
