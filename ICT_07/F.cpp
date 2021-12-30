#include<bits/stdc++.h>
using namespace std;

int arr[10001][801];
int main()
{
	int i,j,k,n,m,val,t;
	cin>>n>>m;
	//int token[m+1][100001];
	vector<int> token[m+1][801];
	string s;
	vector<string> v1[m+1];
	for(i=1;i<=n;++i)
	{
		cin>>s>>k>>val;
		arr[k][val]++;
		v1[k].push_back(s);
		token[k][val].push_back((v1[k].size()));
	}
	for(i=1;i<=m;++i)
	{
		int count=2,sign=0;
		vector<string> v;
		for(j=800;j>=0;--j)
		{
			if(count==0)
			{
				break;
			}
			if(arr[i][j]<=count&&arr[i][j]!=0)
			{
				k=token[i][j].size();
				if(k==2)
				{
					v.push_back(v1[i][token[i][j][0]-1]);
					v.push_back(v1[i][token[i][j][1]-1]);
					count=0;
					break;
				}
				else if(k==1)
				{
					v.push_back(v1[i][token[i][j][0]-1]);
					count--;
					if(count==0)
					break;
				}
			}
			else if(arr[i][j]>count&&arr[i][j]>0)
			{
				sign =1;
				break;
			}
		}
		if(sign==1)
		{
			cout<<'?'<<endl;
		}
		else
		{
			cout<<v[0]<<" "<<v[1]<<endl;
		}
	}
	return 0;
}
