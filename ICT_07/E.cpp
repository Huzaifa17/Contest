#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n,m,t;
	cin>>n>>k>>m;
	if(m<0)
	{
		m=m*(-1);
		m=m%n;
		m=n-m;
	}
	else 
	{
		m=m%n;
	}
	m=(k+m)%n;
	if(m==0)
	{
		m=n;
	}
	cout<<m<<endl;
	return 0;
}
