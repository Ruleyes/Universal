#include<stdio.h>
#include<string.h>
char num[3];

int main(){
  scanf("%s",num);
  int Len=0;
  Len=strlen(num);
  if(Len==1){
    for(int i=0;i<num[0]-'0';i++){
      printf("%d",i+1);
    }
  }
  if(Len==2){
    for(int i=0;i<num[0]-'0';i++){
      printf("S");
    }
    for(int i=0;i<num[1]-'0';i++){
      printf("%d",i+1);
    }
  }
  if(Len==3){
    for(int i=0;i<num[0]-'0';i++){
      printf("B");
    }
    for(int i=0;i<num[1]-'0';i++){
      printf("S");
    }
    for(int i=0;i<num[2]-'0';i++){
      printf("%d",i+1);
    }
  }
    
  return 0;
}

