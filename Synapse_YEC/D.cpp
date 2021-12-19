#include<bits/stdc++.h>
using namespace std;

int diff(string s1,string s2)
{
  int arr2[26]={0};
  int arr3[26]={0};
  int i,j,k,n,m;
  for(i=0;s1[i]!='\0';++i)
  {
    arr2[s1[i]-'A']++;
  }
  for(i=0;s2[i]!='\0';++i)
  {
    arr3[s2[i]-'A']++;
  }
  int sum=0;
  for(i=0;i<26;++i)
  {
    if(arr3[i]!=arr2[i])
      sum++;
  }
  return sum;
}

int main()
{
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n,i,j,k,m,t,min,pos_last,pos_first;
  string s;
  cin>>t;
  for(i=0;i<t;++i)
  {
    cin>>n;
    std::vector<string> v;
    min=1000000007;
    for(j=0;j<n;++j)
    {
      cin>>s;
      v.push_back(s);
    }
    sort(v.begin(),v.end());
    vector<int> v2[n-1];
    for(j=0;j<n-1;++j)
    {
      //v2[j].push_back(1000000007);
      for(k=0;k<n;++k)
      {
        if(j==k)
        {
          v2[j].push_back(1000000007);
          continue;
        }
        v2[j].push_back(diff(v[j],v[k]));
      }
    }
    for(j=v.size()-2;j>=0;--j)
    {
       for(k=n-1;k>=0;--k)
       {
        if(v2[j][k]<=min)
        {
          min=v2[j][k];
          pos_first=j;
          pos_last=k;
        }
       }
    }
    cout<<v[pos_first]<<" "<<v[pos_last]<<endl;
  }
  return 0;
}
