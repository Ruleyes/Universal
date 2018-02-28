#include<stdio.h>

char a1[]={'b','c'};
//char a2[]="a";

int main(){
  printf("char a1 =%d.\n",a1);
 // printf("The char of 3 is %s.\n",(char)3);
  //printf("char a2 =%s.\n",a2);
  printf("The value of 'a' is =%d.\nThe value of '\\0' is %d.\n",'a','\0');
  for(int i=0;i<128;i++){
    putchar(i);
    printf("\n");
  }
  return 0;

}
