#include <stdio.h>

int isMultiple(int n){
  int i;
  for(i = 20;i>0;i--){
    if(n%i!=0){
      return 0;
    }
  }
  return 1;
}

int main(){
  int n = 20;
  while(1){
    if(isMultiple(n)){
      printf("%d", n);
      return 0;
    }

    n+=20;
  }
}
