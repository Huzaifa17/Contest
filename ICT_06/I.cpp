#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	long long int n,i,j,k,m,t;
	cin>>n>>k;
	long long sum=0;
	m=k;
	t=n-1;
	if(k>=(n/2))
	{
		m=n;
	}
	for(i=1;i<=m;++i,t--)
	{
		if(t<0)
		{
			break;
		}
		sum+=t;
	}
	if(n-(2*k)>1)
	{
		//here
		for(i=1;i<=(n-(2*k));i++)
		{
			sum+=(k);
		}	
		j=k;	
		for(i=1;i<=k;++i,j--)
		{
			//here
			sum+=(j-1);
		}
	}
	cout<<sum<<endl;
	return 0;
}
