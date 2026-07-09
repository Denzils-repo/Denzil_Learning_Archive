#include<stdio.h>
int main(){
	int size;
	int i;
	printf("Please enter the size of the array:");
	scanf("%d",&size);
	int n[size];
	printf("Please enter %d elements into the array:",size);
	for(i=0;i<size;i++){
		scanf("%d",&n[i]);
	}
	printf("The array after reversing is:\n");
	for(i=size-1;i>=0;i--)printf("%d ",n[i]);
	return 0;
}
