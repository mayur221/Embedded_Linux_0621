#include <stdio.h>

int main(){

    int sum=0;
    int num;
    printf("Enter any digit: ");
    scanf("%d", &num);
    
    while(num > 0 || sum >= 9){
        if(num == 0)
        {
            num = sum;
            sum = 0; 
        }
        sum += num %10;
        num = num/10;
    }

    printf("Sum is: %d\n", sum);
    return 0;
}

#if 0
/Embedded_linux_0621/20210615 $ gcc sum_to_single_digit.c -o sum
/Embedded_linux_0621/20210615 $ ./sum
Enter any digit: 4543
Sum is: 7
/Embedded_linux_0621/20210615 $ ./sum
Enter any digit: 1234
Sum is: 1
/Embedded_linux_0621/20210615 $ ./sum
Enter any digit: 56789
Sum is: 8
#endif
