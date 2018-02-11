#include<stdio.h>
#include<stdlib.h>

int main(){
int n=0;
	
  scanf("%d",&n);
    if(n<1||n>1000){
      exit(1);
    }else{
      Count(n);
    };
  return 0;
}

int Count(int x){
  int cnt=0;
  while(x!=1){
    if(x%2==0){
      x=x/2;
    }else{
      x=(3*x+1)/2;
    }
    cnt++;
  }
  printf("%d\n",cnt);

  return 0;
}
