#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n,m,t;
	cin>>n;
	m=2*n;
	int arr[m];
	for(i=0;i<m;++i)
	{
		cin>>arr[i];
	}
	int c=0;
	k=arr[0];
	for(i=1;i<m;++i)
	{
		if(arr[i]!=k)
		{
			c=1;
			break;
		}
	}
	if(c==0)
	{
		cout<<-1<<endl;
		return 0;
	}
	sort(arr,arr+m);
	for(i=0;i<m;++i)
	{
		if(i==0)
		{
			cout<<arr[i];
		}
		else
		{
			cout<<" "<<arr[i];
		}
	}
	cout<<endl;
	return 0;
}
