#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	long long int n,i,j,k,m,t;
	cin>>n>>k;
	long long int arr[n];
	long long int min=1000000005;
	for(i=0;i<n;++i)
	{
		cin>>arr[i];
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	long long int sum=0;
	for(i=0;i<n;++i)
	{
		if((arr[i]-min)%k!=0)
		{
			cout<<-1<<endl;
			return 0;
		}
		sum+=((arr[i]-min)/k);
	}
	cout<<sum<<endl;
	return 0;
}
