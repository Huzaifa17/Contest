#include<bits/stdc++.h>
using namespace std;
int main()
{
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n,i,j,k,m,t;
  cin>>t;
  for(i=0;i<t;++i)
  {
    cin>>n>>m;
    k=(n*m);
    k=(k)/(m-n);
    cout<<"Case "<<i+1<<": "<<k<<endl;
  }
  return 0;
}
