#include<stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a=5;
	int b=10;
	printf("Before Swapping we have %d in a and %d in b\n",a,b);
	swap(&a,&b);
	printf("Before Swapping we have %d in a and %d in b\n",a,b);
	return 0;
}
