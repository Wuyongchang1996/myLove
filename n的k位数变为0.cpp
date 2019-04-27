#include<iostream>
using namespace std;
int Turn(int n,int k){
	char s[10]={0};
	sprintf(s,"%d",n);
	s[k-1]='0';
	sscanf(s,"%d",&n);
	return n;
}
int main()
{
	int n,k;
	cin>>n>>k;
	n=Turn(n,k);
	cout<<n<<endl;
	return 0;
 } 
