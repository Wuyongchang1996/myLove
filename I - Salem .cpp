#include<iostream>
using namespace std;
int main()
{
	int T,N,A[100+5][14],n;
	cin>>T;
	while(T--)
	{
		cin>>N;
		for(int i=1;i<=N;i++)
		{
			cin>>n;
			for(int j=0;j<14;j++)
			{
				A[i][j]=n%2;
				n=n/2;
			}
		}
		int ans=0,anss;
		for(int i=1;i<N;i++)
		  for(int j=i+1;j<=N;j++)
		    {
			anss=0;
		    for(int k=0;k<14;k++)
			  if(A[i][k]!=A[j][k]) anss++;
			if(ans<anss) ans=anss;
		}
		cout<<ans<<endl;
	}
	return 0;
 } 
