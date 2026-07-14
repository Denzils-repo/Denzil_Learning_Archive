#include<stdio.h>
int main(){
    int size=0;
    printf("Please enter ther size of the array:");
    scanf("%d",&size);
    int nums[size];
    printf("Enter %d numbers into the array:",size);
    int i;
    for(i=0;i<size;i++){
        scanf("%d",&nums[i]);
    }
    int find;
    int found=0;
    printf("enter the number you wish to find in the entered array:");
    scanf("%d",&find);
    for(i=0;i<size;i++){
        if(nums[i]==find){
            printf("The given number is found at the index: %d",i);
            found=-1;
            break;
        }
    }
    if(!found){
        printf("The given number doesnt exist in the array!: ");
    }
    return 0;
}
