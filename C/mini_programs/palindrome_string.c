#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    printf("enter the size of the string: ");
    scanf("%d",&size);
    if(size<=2){
    	printf("you need atleast to make a palindrome!");
    	exit(0);
	}
    char mystr[size+1];
    printf("enter a %d letter word: ",size);
    scanf("%s",mystr);
    int i;
    for(i=0;i<size/2;i++){
    	if(mystr[i]!=mystr[size-1-i]){
    		printf("The given string is not a palindrome!");
    		exit(1);
    		break;
		}
	}
	printf("the given string is a palindrome!");
    return 0;
}
