#include <stdio.h>

int max_num,min_num;

void num_n_1(int num){
    if(num <=0){
        return;
    }
    num_n_1(num-1);
    printf("%d\n", num);
}

int num_1_n(int num){
    if(num > max_num){
        return 0;
    }
    num_1_n(num+1);
    printf("%d\n", num);
}

int main(){
    printf("Enter the Max and Min number of the series: ");
    scanf("%d %d\n", &max_num, &min_num);
    
    //calling function for print n to 1
    num_n_1(num);
    
    //calling function for print 1 to n
    num_1_n(1);
    return 0;
}
