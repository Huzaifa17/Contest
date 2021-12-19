#include<bits/stdc++.h>
using namespace std;
int main()
{
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n,i,j,k,m,t,sum,sum_inn,p,h;
  char s[500];
  cin>>t;
  for(i=0;i<t;++i)
  {
    cin>>n;
    sum=0,sum_inn=0;
    for(j=0;j<n;++j)
    {
      cin>>s;
      k=strlen(s);
      if(s[k-1]!='*')
      {
        sum_inn++;
        p=k-1;
      }
      else
      {
        p=k-2;
      }
      m=0;
      for(h=0;h<=p;h++)
      {
        m=m*10+(s[h]-'0');
      }
      sum+=m;
    }
    if(sum_inn==0)
      {
        cout<<"Case "<<i+1<<": "<<-1<<endl;
      }
      else
      {
        cout<<"Case "<<i+1<<": "<<(sum/sum_inn)<<endl;
      }
  }
  return 0;
}
