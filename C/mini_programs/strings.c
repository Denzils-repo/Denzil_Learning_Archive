#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
int main(){
	int size;
	printf("Enter the size of the word you would like to enter:");
	scanf("%d",&size);
	getchar();
	char mystring[size+1];
	printf("Please enter the %d letter word/sentence: ",size);
//	fgets(mystring,size+1,stdin);
	char ch;
	int i;
	for(i=0;i<size;i++){
		ch=getchar();
		if(islower(ch)){
			mystring[i]=toupper(ch);
		}else if(isupper(ch)){
			mystring[i]=tolower(ch);
		}else{
			mystring[i]=ch;
		}
	}mystring[size]='\0';
	printf("You entered: %s",mystring);
	return 0;
}
