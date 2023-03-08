#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 0;
    int i = 1;
    for (i = 0; i < 1000; i++)
    {
        if(i%3==0 || i%5 == 0){
            n+=i;
            printf("%d\n", i);
        }
    }
    printf("%d", n);
    return 0;
}
