#include<stdio.h>
int main(){
  int bucket[1001]={0};
  int t,n,i,j;
  scanf("%d",&t);
  for(i=0;i<t;i++){
    scanf("%d",&n);
    bucket[n]++;
  }
  for(i=1000;i>=0;i--){
    for(j=0;j<bucket[i];j++){
      printf("%d ",i);
    }
  } 
}