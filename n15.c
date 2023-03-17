//takes forever, but it works

#include <stdio.h>

long long int paths = 0;
int gridSize = 20;

int main(int argc, char const *argv[])
{
    move(0, 0);
    printf("%lld\n", paths);

    return 0;
}

int move(int x, int y){
    if(x!= gridSize){
        move(x+1, y);
    }
    if(y!= gridSize){
        move(x, y+1);
    }
    if(x==gridSize && y == gridSize){
        paths++;
    }
    return 0;
}