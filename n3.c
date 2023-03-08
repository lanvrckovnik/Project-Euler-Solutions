#include <stdio.h>

int main()
{
    long long goal = 600851475143;
    int b = 2;

    while(goal != 1){
        if(goal % b == 0){
            goal /=b;
            printf("%lld\n", goal);
        }else{
            b++;
        }
    }
    printf("%d\n", b);
}