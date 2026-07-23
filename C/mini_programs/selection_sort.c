#include<stdio.h>
int main(){
    int n=5;
    int nums[]={88,91,1,1,0};
    int i,j,min,temp;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(nums[j]<nums[min]){
                min=j;
            }
        }
        if(min!=i){
            temp=nums[i];
            nums[i]=nums[min];
            nums[min]=temp;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",nums[i]);
    }
    return 0;
}