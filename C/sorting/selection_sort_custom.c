#include<stdio.h>
int main(){
    int n=5;
    int nums[]={88,91,1,1,0};
    int i,j;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(nums[i]>nums[j]){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",nums[i]);
    }
    return 0;
}