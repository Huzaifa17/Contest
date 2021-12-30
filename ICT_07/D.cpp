#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n,m,m1,t,c,sign;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>n;
		int arr[n];
		int arr2[1000001]={0};
		m=n/2;
		for(j=0;j<n;++j)
		{
			cin>>arr[j];
			arr2[arr[j]]=1;
		}
		c=0;
		sign=0;
		int count=0;
		sort(arr,arr+n);
		for(j=0;j<n;++j)
		{
			for(k=j+1;k<n;++k)
			{
				m=arr[k]%arr[j];
				if(arr[k]!=arr[j]&&arr2[m]==0)
				{
					cout<<arr[k]<<" "<<arr[j]<<endl;
					count++;
				}
				if(count==(n/2))
				{
					c=1;
					break;
				}
			}
			if(c==1)
			{
				break;
			}
		}
	}
	return 0;
}
