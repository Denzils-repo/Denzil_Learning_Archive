
#include<stdio.h>
int main(){
    int n=5,i,j;
    int nums[]={66,8,62,1,67};
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-2;j++){
            if(nums[j]>nums[j+1]){
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",nums[i]);
    }
    return 0;
}
