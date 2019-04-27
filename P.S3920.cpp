#include<stdio.h>
int main(void)
{
	int n,p,j,a,e,i,o,u;
	char ch;
	scanf("%d",&n);
	for(p=1;p<=n;p++)
	{
        a=e=i=o=u=0;
		for(j=1;j<=50;j++)
		{
			ch=getchar();
			switch(ch)
			{
				case'H':case'h':case'A':case'a':
				  a++;
				  break;
                case'E':case'e':
                  e++;
                  break;
                case'Y':case'y':
				  i++;
				  break;
				case'O':case'o':
				  o++;
				  break;
				case'U':case'u':
				  u++;
				  break;
				default:
				  break;  
			}
			if(ch=='!'||ch=='.'||ch=='?')
			  break;
		}
		printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",a,e,i,o,u);
	}
	return 0;
}
/*
2
Hello.
How are you!
*/