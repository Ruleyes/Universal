#include<stdio.h>
#include<math.h>

int main(){
  int m,n;
  scanf("%d",&n);
  int ray[n];
  int k=0;
  for(int i=2;i<n;i++){
    if(judge(i)!=0){
      ray[k]=i;
      k++;
    }
  }
  int t=0;
  int Count=0;
  do{
    if(ray[t+1]-ray[t]==2){
      Count++;
      t++;
    }
  }
  while(t<k);
  printf("%d\n",Count);
  return 0;
}

int judge(int x){
  int m,count=0;
  m=sqrt(x)+1;
  for(int j=2;j<m;j++){
    if(x%j==0)  count++;
  }
  return (count>0)?0:x;
}
 
