#include<stdio.h>
#include<math.h>
int calc_length(int x){
    int length=0;
    while(x!=0){
        x=x/10;
        length++;
    }
    return length;
}

bool is_palindrome(int a){
    //negative numbers cant be palindrome
    if(a<0){
        printf("It is not a palindrome");
    }

    //initializing varaibles and getting the length of the given number
    int temp=0;
    int hold_a=0;
    int left_a=a/100; //get the left half of the given number
    int len=0;
    int hold_og_a=0;

    while(true){
        int x,y;

        //stripping left character 1 after another
        int len=calc_length(left_a)-1;
        int n=pow(10,len);
        x=left_a/n;

        while(len!=x){
            temp=left_a%10;
            left_a=left_a/10;
            hold_a=(hold_a*10)+temp;
            len--;
        }left_a=hold_a; //assign the new left

        //stripping the right character 1 after another
        y=a%10;
        a=a/10;

        //comparing each and individial element

        if(x!=y){
            break;
            return false;
        }
    }
    return true;
}

int main(){
    int a;
    printf("PLAINDROME FOR NUMBERS\n\nPlease enter a number to check if its a palindrome: ");
    scanf("%d",&a);
    bool is_pal=is_palindrome(a);
    if(is_pal){
        printf("The given number is a plaindrome");
    }else{
        printf("the given number is not a palindrome");
    }
}