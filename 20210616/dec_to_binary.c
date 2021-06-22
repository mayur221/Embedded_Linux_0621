#include <stdio.h>

int decimal_to_binary(int num){

    if(num ==0){
        return 0;
    }
    else{
        return ((num%2)+10*decimal_to_binary(num/2));
    }
}


int main(){
    
    int num, binary;

    printf("Enter decimal number: ");
    scanf("%d\n", &num);
    binary = decimal_to_binary(num);
    printf("Decimal: %d = Binary:%d", num,binary);

    return 0;
}
