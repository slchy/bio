#include<stdio.h>
int main(){
  int tank[1001]={0};
  int n,i,j,e;

  scanf("%d",&n);
  for (i = 0; i < n; i++)
  {
    scanf("%d",&tank[i]);
  }
  
  for (i = 0; i < n - 1; i++)
  {
    for ( j = 0; j < n - i; j++)
    {
      if(tank[j] < tank[j + 1])
      {
        e = tank[j];
        tank[j] = tank[j + 1];
        tank[j + 1] = e;
      }  
    }
  }

  for (i = 0; i < n; i++)
  {
    printf("%d ", tank[i]);
  }
  
  return 0;
}