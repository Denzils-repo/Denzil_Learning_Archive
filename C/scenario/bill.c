#include<stdio.h>
#include<string.h>

int main(){
    int n;
    char products[50][50], subs[50];
    int price[50], quantity[50], total=0, discount=0, i=0, temp;

    printf("Enter the number of products you wish to buy:");
    scanf("%d",&n);

    temp = n;

    while(n!=0){
        printf("\nEnter the name of the product:");
        scanf("%49s", products[i]);

        printf("Enter the price of the product:");
        scanf("%d",&price[i]);

        printf("Enter the quantity of the product:");
        scanf("%d",&quantity[i]);

        total += price[i] * quantity[i];

        n--;
        i++;
        printf("\n");
    }

    if(total >= 1000){
        discount = 10;
        total -= total * 10 / 100;
    }
    else if(total >= 500){
        discount = 5;
        total -= total * 5 / 100;
    }

    printf("Total after applying %d%% discount is: %d", discount, total);
    printf("\nEnter the name or substring to find if any product exists with that name:");
    scanf("%49s", subs);

    for(i=0; i<temp; i++){
        if(strstr(products[i], subs) != NULL){
            printf("The Product you searched for was found!\n");
            printf("Product Info:\n");
            printf("Product Name: %s\n", products[i]);
            printf("Product Price: %d\n", price[i]);
            printf("Product Quantity: %d\n", quantity[i]);
            return 0;
        }
    }
    printf("Product was not found!");
    return 0;
}
