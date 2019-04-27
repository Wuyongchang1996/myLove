#include<iostream>
using namespace std;
#include<cmath>
int main()
{
	int T,N,x1,y1,x2,y2;
	cin>>T;
	while(T--)
	{
		cin>>N>>x1>>y1>>x2>>y2;
		int d=abs(x1-x2)+abs(y1-y2);
		if(((N+1)/2)<d)
		{
			if(N%2==0) cout<<-1<<endl;
			else cout<<1<<endl;
		}
		else 
		{
			if(d%2==0)
			{
				cout<<1<<endl;
			}
			else
			{
				if(N%2==0) cout<<-1<<endl;
				else cout<<2<<endl;
			}
		}
	}
	return 0;
}
