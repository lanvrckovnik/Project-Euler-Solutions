#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numbers = 100;
    int i;
    int j;
    int sum = 0;

    for (i = 0; i <= numbers; i++)
    {
        sum+=i;
    }

    sum*=sum;

    for (i = 1; i <= numbers; i++)
    {
        sum-=i*i;
    }
    
    printf("%d\n", sum);
    return 0;
}
