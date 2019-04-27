#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int T,Q,M;
	char q[100+5][100+5],a[100+5][100+5];
	int c[100+5][4];
	cin>>T;
	while(T--)
	{
		memset(c,0,sizeof(c));
		cin>>Q>>M;
		for(int i=1;i<=M;i++)
		  for(int j=1;j<=Q;j++)
		    {
		    	cin>>q[i][j]>>a[i][j];
		    	if(q[i][j]=='A'){if(a[i][j]=='T') c[j][0]++;
		    	else c[j][0]--;}
		    	if(q[i][j]=='B'){if(a[i][j]=='T') c[j][1]++;
		    	else c[j][1]--;}
		    	if(q[i][j]=='C'){if(a[i][j]=='T') c[j][2]++;
		    	else c[j][2]--;}
		    	if(q[i][j]=='D'){if(a[i][j]=='T') c[j][3]++;
		    	else c[j][3]--;}
			}
		for(int i=1;i<Q;i++)
		  {
		  	if(c[i][0]>0) cout<<"A"<<" ";
		  	else if(c[i][1]>0) cout<<"B"<<" ";
		  	else if(c[i][2]>0) cout<<"C"<<" ";
		  	else if(c[i][3]>0) cout<<"D"<<" ";
		  	else if(c[i][0]<0&&c[i][1]<0&&c[i][2]<0&&c[i][3]==0) cout<<"D"<<" ";
		  	else if(c[i][0]<0&&c[i][1]<0&&c[i][3]<0&&c[i][2]==0) cout<<"C"<<" ";
		  	else if(c[i][0]<0&&c[i][3]<0&&c[i][2]<0&&c[i][1]==0) cout<<"B"<<" ";
		  	else if(c[i][3]<0&&c[i][1]<0&&c[i][2]<0&&c[i][0]==0) cout<<"A"<<" ";
		  	else cout<<"?"<<" ";
		  }
		    if(c[Q][0]>0) cout<<"A"<<endl;
		  	else if(c[Q][1]>0) cout<<"B"<<endl;
		  	else if(c[Q][2]>0) cout<<"C"<<endl;
		  	else if(c[Q][3]>0) cout<<"D"<<endl;
		  	else if(c[Q][0]<0&&c[Q][1]<0&&c[Q][2]<0&&c[Q][3]==0) cout<<"D"<<endl;
		  	else if(c[Q][0]<0&&c[Q][1]<0&&c[Q][3]<0&&c[Q][2]==0) cout<<"C"<<endl;
		  	else if(c[Q][0]<0&&c[Q][3]<0&&c[Q][2]<0&&c[Q][1]==0) cout<<"B"<<endl;
		  	else if(c[Q][3]<0&&c[Q][1]<0&&c[Q][2]<0&&c[Q][0]==0) cout<<"A"<<endl;
		  	else cout<<"?"<<endl;
	}
	return 0;
}
