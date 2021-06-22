#include <stdio.h>

int main(){

    int a = 2, b =1, x;
    x=(a++ && (!b) && b || ++a);
    printf("%d\n",x);
    return 0;
}


#if 0
// Output
$ gcc operator.c -o opr
$ ./opr
1
#endif
