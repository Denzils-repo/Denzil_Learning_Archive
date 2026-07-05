#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void odd_even(int a,int b){
    if(a%2==0){
        printf("even\n");
    }else{
        printf("odd\n");
    }
    for(int i=a+1;i<=b;i++){
        if(i%2==0){
            printf("even\n");
        }else{
            printf("odd\n");
        }
    }
    return;
}

void printnums(int a,int b){
    char *nums[]={"zero","one","two","three","four","five","six","seven","eight"};
    if(a>=0&&a<=9){
        printf("%s\n",nums[a]);
    }
    if(b>a&&b<9){
        for(int i=a+1;i<=b;i++){
            printf("%s\n",nums[i]);
        }
    }else{
        printf("nine\n");
    }
    return;
}

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	printnums(a,b);
    odd_even(a,b);
    return 0;
}

