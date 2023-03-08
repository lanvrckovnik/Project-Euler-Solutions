#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 1;
    int i = 1;
    while(i!=10001){
        n+=2;
        i+=isPrime(n);
    }
    printf("%d\n", n);
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
