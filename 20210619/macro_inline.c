#include <stdio.h>

#define MAX(a, b)       \
        if (a < b)                  \
                printf("Maximum is b: %d\n", b);

#if 1
#define macro_MUL(x) x*x

static inline int MUL(int a){
    return a*a;
}
#endif

int main( void)
{
        #if 1
        int val = 5;
        printf("Multiplication using MACRO: %d\n",macro_MUL(val+1));
        printf("Multiplication using Inline: %d\n",MUL(val+1));
        #endif
        if (1)
            MAX(20, 10)
        else
            printf("Macro failed\n");
        return 0;
}

#if 0
Output 1:
 "macro failed"
    Reason the compiler sees the C code as,
        int main( void)
        {
            if (true)
                if (20 < 10) 
                    cout << "Maximum is b:" << b << endl;
                else
                    cout << "Macro failed." << endl;
            return 0;
        }

----Adavantage---
Also by static keyword we can limit this function on external linkage and 
we can use same funciton name in another file and in programme

----Links
https://www.codeproject.com/Articles/8376/Function-like-Macros-vs-Inline-Functions
https://stackoverflow.com/questions/1137575/inline-functions-vs-preprocessor-macros

#endif
