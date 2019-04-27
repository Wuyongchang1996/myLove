#include<stdio.h>
int main()
{
    int i,T,n,max,min,a[1000],t,p;
    scanf("%d",&T);
    if(T<=10)
    {
    t=0;
    while(scanf("%d",&n)!=EOF)
    {   p=0;
        if(n<=1000)
        {
            for(i=0;i<n;i++)
               {scanf("%d",&a[i]);
               if(a[i]<=100000&&a[i]>0)
               p++;}
            if(p==n)
            {
            max=a[0];
            min=a[0];
            for(i=0;i<n;i++)
            {
                if(max<a[i])
                  max=a[i];
                if(min>a[i])
                  min=a[i];
            }
            printf("%d\n",max-min);
            }
            t++;
            if(t==T) break;
        }
    }
    }
    return 0;
}
