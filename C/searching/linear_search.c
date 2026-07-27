#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int n;

    printf("Please enter the size of the array: ");
    scanf("%d",&n);

    int nums[n],i=0;
    printf("Enter %d Numbers into the array: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }

    int search_num;
    printf("Enter the number to check if it exists in an array and show its index: ");
    scanf("%d",&search_num);

    int flag=0;
    for(i=0;i<n;i++){
        if(search_num==nums[i]){
            printf("The Given number was found at index: %d\n",i+1);
            flag=1;
        }
    }
    if(!flag){
        printf("The Given Number was not found in the array!");
    }
    return 0;
}