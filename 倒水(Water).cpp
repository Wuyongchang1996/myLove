#include<iostream>
using namespace std;
#include<cmath>
int main()
{
	int T,N,K,n[100005];
	n[0]=0;
	cin>>T;
	while(T--)
	{
		cin>>N>>K;
		int t=1;
		for(int i=0;;i++)
		{
			if(N%2==1) {n[t]=pow(2,i);t++;}
			N=N/2;
			if(N==0) break;
		}
		if(K>=t) cout<<0<<endl;
		else {
			int ans=n[t-K];
			for(int i=t-K-1;i>=0;i--)
			  ans=ans-n[i];
			cout<<ans<<endl;
		}
	}
	return 0;
}
