#include<stdio.h>
int main()
{
	int i,j,k,n,m,t;
	scanf("%d",&t);
	for(i=0;i<t;++i)
	{
		scanf("%d",&n);
		if(n==1)
		{
			//cout<<0<<endl;
			printf("%d\n",0);
		}
		else if(n==2)
		{
			//cout<<1<<endl;
			printf("%d\n",1);
		}
		else if(n==3)
		{
			//cout<<2<<endl;
			printf("%d\n",2);
		}
		else if(n>3)
		{
			if(n%2==0)
			{
				//cout<<2<<endl;
				printf("%d\n",2);
			}
			else 
			{
				//cout<<3<<endl;
				printf("%d\n",3);
			}
		}
	}
	return 0;
}
