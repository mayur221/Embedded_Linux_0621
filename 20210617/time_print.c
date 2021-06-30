#include <stdio.h>
#include <time.h>

int main(){

    time_t tv=time(NULL);
    struct tm tim=*localtime(&tv);
    printf("%s", ctime(&tv));
    printf("%d %d %d\n", tim.tm_hour, tim.tm_min, tim.tm_sec);

    return 0;
}
