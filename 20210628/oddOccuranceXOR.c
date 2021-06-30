#include <stdio.h>
 
int getOddOccurrence(int ar[], int ar_size)
{
    int res = 0;
    for (int i = 0; i < ar_size; i++)    
        res = res ^ ar[i];
     
    return res;
}
 
int main()
{
    //int ar[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
    int ar[] = {20,20,40,40,13,13,11,88,88,98,98,11,11};
    int n = sizeof(ar) / sizeof(ar[0]);
     
    printf("%d\n", getOddOccurrence(ar, n));
    return 0;
}
