#include <stdio.h>

int isPolindrom(int n){
  if(n/100000 != n%10){
    return 0;
  }
  if(n/10000%10 != n%100/10){
    return 0;
  }
  if(n/1000%100 != n%1000/100){
    return 0;
  }

  return 1;
}



int main(){
  int i;
  int j;
  int max = 0;

  for(i=999; i>350;i--){
    for(j=999; j>350;j--){
	if(isPolindrom(i*j) && i*j > max){
	  max = i*j;
	  printf("%d:", max);
	}
    }
  }
printf("done");
return 0;
}
