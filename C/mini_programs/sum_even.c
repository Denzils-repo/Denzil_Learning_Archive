#include<stdio.h>
int main(){
    int size;
    printf("please enter the size of the array: ");
    scanf("%d",&size);
    int myarray[size];
    printf("enter %d numbers into the array: ");
    int i;
    for(i=0;i<size;i++){
        scanf("%d",&myarray[i]);
    }
    int sum=0;
    i=0;
    while(i<size){
        if(myarray[i]%2==0){
            sum+=myarray[i];
        }i++;
    }
    printf("the sum of all the even numbers in the array is: %d",sum);
    return 0;
}