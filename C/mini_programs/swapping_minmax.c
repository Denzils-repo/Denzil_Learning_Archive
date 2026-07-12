#include<stdio.h>
int main(){
	int size=0;
	int i;
	printf("enter the size of the array: ");
	scanf("%d",&size);
	printf("enter %d elements into the array: ");
	int nums[size];
	scanf("%d", &nums[0]);
	int minpos=0;
	int min=nums[0];
	int maxpos=0;
	int max=nums[0];
	for(i=1;i<size;i++){
		scanf("%d",&nums[i]);
		if(min>=nums[i]){
			min=nums[i];
			minpos=i;
		}
		if(max<=nums[i]){
			max=nums[i];
			maxpos=i;
		}
	}
	nums[minpos]=max;
	nums[maxpos]=min;
	printf("The array after swapping min and max numbers:");
	for(i=0;i<size;i++){
		printf("%d ",nums[i]);
	}
	return 0;
}
