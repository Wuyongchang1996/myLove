#include <stdio.h>
#include <string.h>
int main()
{
    int len,i,j,t,n;
     	char c[50];
     	scanf("%d",&n);
        getchar();
        while(n--)
        {
	    gets(c);
	    {
        t=0;
    	j=0;
		len=strlen(c);
 	    if((c[0]>='a'&&c[0]<='z')||(c[0]>='A'&&c[0]<='Z')||c[0]=='_')
       	{t++;}
        for (i=1;i<len;i++)
        {
		if((c[i]>='a'&&c[i]<='z')||(c[i]>='A'&&c[i]<='Z')||c[i]=='_'||(c[i]>='0'&&c[i]<='9'))
       	{t++;}
        }
 	    if(t==len)
        {printf("%yes\n");}
        else
        {printf("no\n");}
     }
        }
}
