#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,j,k,m,t;
	int A,ta,B,tb,h,start,ed;
	char s;
	cin>>A>>ta;
	cin>>B>>tb;
	cin>>h>>s>>m;
	start=h*60+m;
	ed=start+ta;
	ed--;
	start++;
	//cout<<start<<" "<<ed<<endl;
	int count=0;
	for(i=5*60;i<=(23*60+59);i=i+(B))
	{
		j=i;
		k=i+tb;
		if((j>=start&&j<=ed))
		{
			//cout<<j<<endl;
			count++;
		}
		else if(j<start)
		{
			if(k>=start)
			{
				//cout<<j<<endl;
				count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
