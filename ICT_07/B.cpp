#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n,m,t;
	cin>>n;
	int arr[n];
	for(i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	if(arr[0]==1)
	{
		cout<<-1<<endl;
	}
	else
	{
		cout<<1<<endl;
	}
	return 0;
}
