#include <stdio.h>

#define is_EVEN(n)   (((n%2) == 0) ? 1 : 0)
//#define is_ODD(n)    (((n%2) != 0) ? 1 : 0)

int main(){

    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    if(num != 0){
        if(is_EVEN(num) == 1){
            printf("Even Number\n");
        }
        else{
            printf("Odd Number\n");
        }
    }
    else{
        printf("Please enter non zero positive number\n");
    }    
    return 0;
}
