#include <stdio.h>


int main(){
    int x=10, y=20;
    {
        int x=20, z=30;
        printf("%d %d\n", x,z);

    }

    printf("%d %d\n", x,z);
    return 0;
}


#if 0
// output---

/Embedded_linux_0621/20210615 $ gcc local_var_scope.c -o lvs
local_var_scope.c: In function ‘main’:
local_var_scope.c:12:25: error: ‘z’ undeclared (first use in this function)
     printf("%d %d\n", x,z);
                         ^
local_var_scope.c:12:25: note: each undeclared identifier is reported only once for each function it appears in


#endif
