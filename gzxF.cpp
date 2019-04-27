#include<stdio.h>
#include<string.h>
int main()
{
	char a[41]={'a','b','h','c','u','j','z','q','a','c','e','h','b','f','j','k','b','a','c','x','m','c','n','j','k','a','e','c','f','i','a','l','l','c','x','c','b','b','c','a','d'};
	char b[40],temp;
	int c[40];
	int i,n,j,t;
	for(i=0;i<40;i++)
	c[i]=0;
	n=1;
	b[1]='a';
	 for(i=0;i<40;i++)
    {
        t=0;
        for(j=0;j<n;j++)
        {
            if(strcmp(a[i],b[j])==0)
              c[j]++;
            else t++;
        }
        if(t==n)
        {
            n++;
            strcpy(b[n-1],a[i]);
            c[n-1]++;
        }
    }
    for(i=0;i<n-1;i++)
    {
       index=i;
       for(j=i+1;j<n;j++)
         if(c[j]>c[index])
           index=j;
       temp=b[index];
       b[index]=b[i];
       b[i]=temp;
    }
    if(strcmp(b[0],b[1])>0)
    printf("%s\t%s",b[0],b[1]);
    else printf("%s\t%s",b[1],b[0]);
    return 0;

}
