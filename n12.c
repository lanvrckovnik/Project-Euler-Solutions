#include <stdio.h>
#include <math.h>

int devisorCount(long int n){
    long int i =1;
    int count = 0;
    int sq = sqrt(n);
    while(i<sqrt(n) && count < 501)
    {
        if(n%i==0){
            count++;
        }
        i++;
    }
    
    return count*2+1;
}


int main(int argc, char const *argv[])
{
    long int n=0;
    int i = 1;

    do{
        n+=i;
        i++;
    }while(devisorCount(n)<501);

    printf("%ld\n", n);

    return 0;
}