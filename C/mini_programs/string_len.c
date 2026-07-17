#include<stdio.h>
int main(){
    printf("Enter the string you wish to get the length for: ");
    int sum=0;
    int ch;
    while((ch=getchar())!='\n'&&ch!=EOF){
        sum++;
    }
    printf("The length of the enterd word is: %d",sum);
    return 0;
}