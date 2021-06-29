#include <stdio.h>

#define SET_BIT(val, nbit)  (val |= (1 << (nbit)))

#define RST_BIT(val, nbit)  (val &= (~(1 << (nbit))))

#define TOGL_BIT(val, nbit) (val ^= (1 << (nbit)))


int main(){
    unsigned int byte,pos;
    printf("Enter the number:");
    scanf("%d",&byte);
    printf("Enter the position of the bit:");
    scanf("%d",&pos);
    printf("Set Bit:%d\n", SET_BIT(byte,pos));
    printf("Reset Bit:%d\n", RST_BIT(byte,pos));
    printf("Toggle Bit:%d\n", TOGL_BIT(byte,pos));
    
    return 0;
}
