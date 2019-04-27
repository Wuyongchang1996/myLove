#include<iostream>
using namespace std;
int main()
{
	int T,w,h;
	cin>>T;
	while(T--)
	{
		cin>>w>>h;
		if(w==h) cout<<"Square"<<endl;
		else cout<<"Rectangle"<<endl;
	}
	return 0;
 } 
