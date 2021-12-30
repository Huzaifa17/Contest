#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,j,k,m,m1,sum=0,temp,t,l;
	std::vector<int> ::iterator it;
	vector<int> v;
	cin>>n>>m>>k;
	for(i=0;i<k;++i)
	{
		cin>>t;
		v.push_back(t);
	}
	for(i=0;i<n;++i)
	{
		for(j=0;j<m;++j)
		{
			cin>>m1;
			it=v.begin();
			for(l=0;l<v.size();++l,it++)
			{
				if(v[l]==m1)
				{
					sum+=(l+1);
					temp=v[l];
					v.erase(it);
					v.insert(v.begin(),temp);
				}
			}
		}
	}
	cout<<sum<<endl;
	return 0;
}
