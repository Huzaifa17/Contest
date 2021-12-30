#include<bits/stdc++.h>
using namespace std;

void getstring(char s[],int n)
{
	int i,j,k,m,t;
	int arr[26]={0};
	for(i=0;s[i]!='\0';++i)
	{
		arr[s[i]-'a']++;
	}
	m=arr['b'-'a'];
	arr['b'-'a']=0;
	i=0;
	for(j=0;j<m;++j)
	{
		s[i]='b';
		++i;
	}
	m=arr['u'-'a'];
	arr['u'-'a']=0;
	for(j=0;j<m;++j)
	{
		s[i]='u';
		++i;
	}
	m=arr['g'-'a'];
	arr['g'-'a']=0;
	for(j=0;j<m;++j)
	{
		s[i]='g';
		++i;
	}
	m=arr['y'-'a'];
	arr['y'-'a']=0;
	for(j=0;j<m;++j)
	{
		s[i]='y';
		++i;
	}
	m=arr['r'-'a'];
	arr['r'-'a']=0;
	for(j=0;j<m;++j)
	{
		s[i]='r';
		++i;
	}
	m=arr['t'-'a'];
	arr['t'-'a']=0;
	for(j=0;j<m;++j)
	{
		s[i]='t';
		++i;
	}
	for(j=0;j<26;++j)
	{
		while(arr[j]>0)
		{
			s[i]=((char)(j+'a'));
			i++;
			arr[j]--;
		}
	}
	s[i]='\0';
	return ;
}

int main()
{
	int i,j,k,n,m,t;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>n;
		char s[n+500];
		cin>>s;
		getstring(s,n);
		cout<<s<<endl;
	}
	return 0;
}
