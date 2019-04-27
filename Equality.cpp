#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[9];
	int a,b,c;
	gets(s);
	a=s[0]-'0';b=s[4]-'0';c=s[8]-'0';
	if(a+b==c) printf("YES\n");
	else printf("NO\n");
	return 0;
}
