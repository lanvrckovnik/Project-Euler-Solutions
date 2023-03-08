#include <stdio.h>

int main()
{
    int fst = 1;
    int sec = 2;
    int n = 0;
    int temp = 0;

    while(sec <= 4000000){
        if(sec%2 == 0){
            n+=sec;
        }
        
        temp = sec;
        sec = sec + fst;
        fst = temp;

    }

    printf("%d\n", n);
    return 0;
}
