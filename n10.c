#include <stdio.h>

int main(int argc, char const *argv[])
{
    long long int sum = 2;

    int i;
    for (i = 3; i < 2000000; i+=2)
    {
        if(isPrime(i)){
            sum+=i;
        }
    }
    
    printf("%lld\n", sum);

    return 0;
}

int isPrime(int n){
    int sqroot = closesSQRT(n);
    int i;
    for (i = 2; i <= sqroot; i++)
    {
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int closesSQRT(int n){
    int i=1;
    while(i*i<n){
        i++;
    }
    return i;
}
