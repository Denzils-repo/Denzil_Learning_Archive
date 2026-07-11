#include<stdio.h>
#include<string.h>
int main(){
	char vowels[]={"aeiouAEIOU"};
	int count=0;
	int ch;
	printf("Enter your word to get the total vowel count: ");
	while((ch=getchar())!='\n'){
		if(strchr(vowels,ch)!=NULL){
			count++;
		}
	}
	printf("The total number of vowels present in your word is %d",count);
	return 0;
}
