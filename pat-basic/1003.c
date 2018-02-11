#include<stdio.h>
#include<string.h>
#define Max 101
//P==96;T==100;A==81
int n;
struct Foot{
  char str[Max];
};
char Char;

int main(){
  scanf("%d",&n);

  int len[n];
  int judge[n];
  struct Foot Str[n];  
  for(int i=0;i<n;i++){
    getchar("%c",&)
    scanf("%s",Str[i].str);
  }
  for(int j=0;j<n;j++){
    len[j]=strlen(Str[j].str);
    printf("len[%d]=%d.\n",j,len[j]);
  }
  for(int i=0;i<n;i++){
    judge[i]=0;
    for(int j=0;j<len[i];j++){
      if(Str[i].str[j]=='P'||Str[i].str[j]=='A'||Str[i].str[j]=='T'){
        judge[i]=0;
      }else{
        judge[i]++;
      }
    }
    if(Str[i].str[0]=='T') judge[i]++;  
    if(Str[i].str[0]=='P'){
    
      if(Str[i].str[len[i]-1]=='T')//PAAAAT
        for(int k=1;k<len[i]-1;k++){
          if(Str[i].str[k]=='A'){
            judge[i]=0;
          }else{
            judge[i]++;
          }
        }
     if(len[i]==2&&Str[i].str[1]=='T') judge[i]++;
    }else if(Str[i].str[0]=='A'){
          int t=0;
          int a=0;
          int b=0;
          int c=0;
          do{
            a++;
          }while(Str[i].str[a]=='A');
               if(Str[i].str[a]!='P') judge[i]++;
               if(Str[i].str[a+1]!='A') judge[i]++;
               t=a;
               while(Str[i].str[t+1]=='A'){
                 t++;
                 b++;
               }

               if(Str[i].str[t+1]!='T')  judge[i]++;
               if(Str[i].str[t+2]!='A')  judge[i]++; 
               t=t+2;
               for(int r=t;r<len[i];r++){
                 if(Str[i].str[r]!='A') judge[i]++;
               }
               c=len[i]-t;

               if(a*b!=c) judge[i]++;
           }else{
             judge[i]++;
           }             
  } 

  for(int i=0;i<n;i++){
    if(judge[i]==0){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }
  return 0;
}


