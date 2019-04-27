#include<stdio.h>
#define N 100
int main()
{
  int m,n,i,j,a[N][N];
  while(scanf("%d%d",&m,&n)!=EOF)
  {
    for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
         {
           scanf("%d",&a[i][j]);
         }
     }
      for(j=0;j<n;j++)
     {
         for(i=0;i<m-1;i++)
         {
           printf("%d ",a[i][j]);
         }
        printf("%d",a[i][j]);
           printf("\n");
     }
 }
}
