#include<stdio.h>

char ch;

int main(){
  
  ch=getchar();
  while((ch==getchar())!='\n'){
    putchar(ch);
  }
  return 0;
}
