#include<iostream>
using namespace std;
#include<string>
int main()
{
	char s[1040],c[1040];
    int bg=0,st;
	gets(s);
	for(int i=0;i<1040;i++)
	{
		
		if(s[i]==' '||s[i]=='\000')
		{
			c[i]=s[i];
			st=i-1;
			for(int j=st;j>=bg;j--)
			c[j]=s[st-j+bg];
			bg=i+1;
		}
	}
	printf("%s",c);
	return 0;
}
