#include <stdio.h>
#include <unistd.h>

int main(){

    char pass[10]={0};
    int i = 0;
    do{
        pass[i]=getc(stdin);
        if(pass[i] != '\n')
        {
            printf("x");
        }
    }while(pass[i++] != '\n');
    pass[i]='\0';
    return 1;
}
