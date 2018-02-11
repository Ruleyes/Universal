#include<stdio.h>
#define max 11
struct Stu{
  char name[max];
  char number[max];
  int  grade;
};
int n;

int main(){
  scanf("%d",&n);
  struct Stu stu[n];
  for(int i=0;i<n;i++){
    scanf("%s%s %d",stu[i].name,stu[i].number,&stu[i].grade);
  }
  int first=0;
  int Maxgrade=stu[0].grade;
  for(int i=1;i<n;i++){
    if(Maxgrade<stu[i].grade){
      Maxgrade=stu[i].grade;
      first=i;
    }
  }
  int last=0;
  int Mingrade=stu[0].grade;
  for(int j=1;j<n;j++){
    if(Mingrade>stu[j].grade){
      Mingrade=stu[j].grade;
      last=j;
    }
  }

  printf("%s %s\n",stu[first].name,stu[first].number);
  printf("%s %s\n",stu[last].name,stu[last].number);
  
return 0;
}

  

