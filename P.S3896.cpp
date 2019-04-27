#include<stdio.h>
#define N 20
int main()
{
  int m,n,i,j,a[N][N];
  while(scanf("%d%d",&m,&n)!=EOF)
  {
    for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
         {
           a[i][j]=1+n*i+j;
         }
     }
      for(i=0;i<m;i++)
     {
        if((i+1)%2!=0)
          {
            for(j=0;j<n-1;j++)
             {
               printf("%2d ",a[i][j]);
             }
             printf("%2d",a[i][j]);
           printf("\n");
           }
        else
            {
            for(j=n-1;j>0;j--)
             {
                  printf("%2d ",a[i][j]);
             }
             printf("%2d",a[i][j]);
            printf("\n");
            }
       }
  }
}
