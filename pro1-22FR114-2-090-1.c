#include<stdio.h>
int main(void){
  int i,sum;
  for(i=1;i<=100;++i){
    if(i%3==0)
      sum+=i;
  }
  printf("%d\n",sum);
  return 0;
}
