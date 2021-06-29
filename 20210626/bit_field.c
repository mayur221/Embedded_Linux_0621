#include <stdio.h>

typedef struct charcter{
   unsigned char bit0:1;
   unsigned char bit1:1;
   unsigned char bit2:1;
   unsigned char bit3:1;
   unsigned char bit4:1;
   unsigned char bit5:1;
   unsigned char bit6:1;
   unsigned char bit7:1;
}Char_bits;

union char_field{
    unsigned char c;
    Char_bits C1;
};

int main(){
    //Char_bits sChar = 0x0A;
    union char_field uChar;//
    uChar.c = 0x0A;

    printf("%d\n", uChar.C1.bit0);
    printf("%d\n", uChar.C1.bit1);
    printf("%d\n", uChar.C1.bit2);
    printf("%d\n", uChar.C1.bit3);
    printf("%d\n", uChar.C1.bit4);
    printf("%d\n", uChar.C1.bit5);
    printf("%d\n", uChar.C1.bit6);
    printf("%d\n", uChar.C1.bit7);

    return 0;
}

#if 0
0
1
0
1
0
0
0
0
#endif
