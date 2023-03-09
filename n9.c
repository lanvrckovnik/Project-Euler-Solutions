#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int b;
    
    for (a = 1; a < 500; a++)
    {
        for (b = a+1; b < 500; b++)
        {
            if(a*a+b*b == (1000-a-b)*(1000-a-b)){
                printf("%d\n", a*b*(1000-a-b));
                return 0;
            }  
        }   
    }
    return 0;
}
