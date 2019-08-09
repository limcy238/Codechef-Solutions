#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,n,m,x,k;
	string s;
	for(cin>>t;t--;)
	{
		cin>>n>>m>>x>>k;
		cin>>s;
		int flag=0;
		if(n>k or m==0)
		flag=0;
		else
		{
			int month[m]={0},i,a=0,b=1,l=s.length();
			for(i=0;i<l;++i)
			{
				if(n<=0)
				break;
				else
				{
				  if(s[i]=='O' and month[a]<x and a<m)
			    	{
				    	--n;++month[a];
				    	if(month[a]==x)
				    	a+=2;
			     	}
				  else if(s[i]=='E' and month[b]<x and b<m)
				    {
					    --n;++month[b];
				    	if(month[b]==x)
					     b+=2;
				    }
				}
			}
			if(n>0)
			flag=0;
			else
			flag=1;
		}
		if(flag==1)
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;
	}
	return 0;
}
