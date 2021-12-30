#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,m,n,t,up=0,down=0,right=0,left=0;
	char s1,s2;
	cin>>s1>>n;
	cin>>s2>>m;
	int currrow,currcol,nextrow,nextcol;
	currcol=s1-'a'+1;
	currrow=n;
	nextcol=s2-'a'+1;
	nextrow=m;
	//cout<<currrow<<" "<<currcol<<" "<<nextrow<<" "<<nextcol<<endl;
	int sum=0;
	if(nextrow>currrow)
	{
		up=nextrow-currrow;
		sum+=up;
	}
	else 
	{
		down=currrow-nextrow;
		sum+=down;
	}
	if(nextcol>currcol)
	{
		right=nextcol-currcol;
		sum+=right;
	}
	else 
	{
		left=currcol-nextcol;
		sum+=left;
	}
	// now the iteration
	int max1=max(up,down);
	int max3,max2=max(left,right),min2;
	max3=max(max1,max2);
	min2=min(max1,max2);
	//while(1)
	cout<<sum-min2<<endl;
	for(i=1;i<=max3;++i)
	{
		if(left>right&&left>0)
		{
			cout<<"L";
			left--;
		}
		else if(right>left&&right>0)
		{
			cout<<"R";
			right--;
		}
		if(up>down&&up>0)
		{
			cout<<"U";
			up--;
		}
		else if(down>up&&down>0)
		{
			cout<<"D";
			down--;
		}
		cout<<endl;
	}
	return 0;
}
