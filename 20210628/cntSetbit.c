#include <stdio.h>

unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}


unsigned int countSetBits_brian_algo(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
    }
    return count;
}

int main()
{
    int i = 9;
    printf("Enter Number: ");
    scanf("%d",&i);
    printf("Approach_1 output:%d\n", countSetBits(i));
    printf("Approach_2 output:%d\n", countSetBits_brian_algo(i));
    return 0;
}

