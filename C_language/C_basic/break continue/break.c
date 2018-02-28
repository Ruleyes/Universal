#include<stdio.h>

int main(){
  
  printf("Loop1:");
  for(int i=1;i<11;i++){
    if(i%2==0){
      printf("%d ",i);
    }else{
      continue;
    }
  }
  printf("\n\nLoop2:\n");  
  for (int j = 0; j < 2; j++) {
    for (int k = 0; k < 5; k++) { // only this loop is exited by break
      if (k == 2) break;
        printf("j=%d, k=%d\n", j,k);
    }
  }

 
  return 0;
}
