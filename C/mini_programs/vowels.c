#include<stdio.h>
#include<string.h>
int main(){
	char vowels[]={"aeiouAEIOU"};
	char mychar;
	printf("Enter an alphabet to check if its a vowel: ");
	scanf("%c",&mychar);
	if(strchr(vowels,mychar)!=NULL){
		printf("the given alphabet is a vowel");
	}else{
		printf("the given alphabet is not a vowel!");
	}
	return 0;
}
