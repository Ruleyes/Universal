#include<stdio.h>
#include<string.h>

int ge[4]={0};
int rear =0;
char *Han[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

int main(){

char str[100];
  scanf("%s",str);

  int len=strlen(str);
  int sum=0;
  for(int i=0;i<len;i++){
    sum+=(int)str[i]-'0';
  }
  
  if(sum==0) printf("ling");
  if(sum>0&&sum<=10) printf("yi");
  if(sum>10){
    while(sum){
      ge[rear]=sum%10;
      sum/=10;
      rear++;
        if(sum<10){
          ge[rear]=sum;
        }
    }
    for(int j=rear-1;j>=0;j--){
      if(j>0){
        printf("%s ",Han[ge[j]]);
      }else{
        printf("%s",Han[ge[j]]);
      }
    }
  }
 

  return 0;
}
