#include<stdio.h>
int main(){
	int n,sum=0;
	
	printf("Please enter to print its sum: ");
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		sum+=i;
	}
	
	printf("The sum of %d is: %d",n,sum);
	
	return 0;
}
