#include<iostream>
using namespace std;
int main()
{
	int T,A,B,C;
	cin>>T;
	while(T--)
	{
		cin>>A>>B>>C;
		cout<<A*B+A/30*C<<endl;
	}
	return 0;
}
