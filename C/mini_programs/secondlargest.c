#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    printf("Please enter the size of the array: ");
    scanf("%d",&size);
    if(size<=1){
    	printf("the given size is not enough!");
    	exit(0);
	}
    int mynums[size];
    printf("Please enter %d number into the array: ");
    int i;
    for(i=0;i<size;i++){
        scanf("%d",&mynums[i]);
    }
    if(size<=2){
    	if(mynums[0]>mynums[1]){
    		printf("The Second Largest number in the array is: %d",mynums[1]);
    		exit(0);
		}else{
			printf("The Second Largest number in the array is: %d",mynums[0]);
			exit(0);
		}
	}

    int temp_max=mynums[0];
    int max_second=-1;
    i=1;
    while(i<size){
        if(temp_max<mynums[i]){
            max_second=temp_max;
            temp_max=mynums[i];
        }else if(mynums[i]>max_second && mynums[i]!=temp_max){
        	max_second=mynums[i];
		}i++;
    }
    printf("The Second Largest number in the array is: %d",max_second);
    return 0;
}
