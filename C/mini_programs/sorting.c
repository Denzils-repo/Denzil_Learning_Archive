#include<stdio.h>
int main(){
    int n=5;
    int nums[]={88,91,1,1,0};
    int i,j;
    for(i=n-1;i!=0;i--){
        int tempmax=0;
        for(j=0;j<n-1;j++){
            tempmax=nums[j];
            if(tempmax<nums[j+1]){
                tempmax=nums[j+1];
            }
        }nums[i]=tempmax;
    }
    return 0;
}