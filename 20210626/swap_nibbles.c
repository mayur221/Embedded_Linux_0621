#include <stdio.h>

int main(){
    char a = 36,b = 63,c;

    printf("Before swap:%d\t",a);
    c=a+b;
    a=c-a;
    printf("After swap:%d\n",a);

    return 0;
}
