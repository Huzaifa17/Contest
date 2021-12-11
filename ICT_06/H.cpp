#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	long long int diff,arr[4],a,b,c,d,n,i,j,k,m,t;
	cin>>n>>a>>b>>c>>d;
	arr[0]=a+b;
	arr[1]=a+c;
	arr[2]=b+d;
	arr[3]=c+d;
	sort(arr,arr+4);
	diff=arr[3]-arr[0];
	if(diff<n)
	{
		//yes
		diff=n-diff;
		k=diff*n;
	}
	else
	{
		k=0;
	}
	cout<<k<<endl;
	return 0;
}
