#include <stdio.h>
int Prime(int x)
{
 int i;
 for(i=2;i<x;i++)
  if(x%i==0)
  break;
  if(x==i)
 return 1;
 return 0;

}
int main()
{
 int i,n,m;
 scanf("%d %d",&n,&m);
 for(i=n;i<=m;i++)
  if(Prime(i))
  printf("%d ",i);
  printf("\n");
}
