#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	string p;
	for(cin>>t;t--;)
	{
		cin>>p;
		int l=p.length();
		int i,daycount=0,len,jump=1;
		for(i=0;i<l-1;++i)
		{
			len=1;
			if(p[i]=='.')
			{
				do
				{
					++len;++i;
				}
				while(p[i]!='#');
			}
			if(len>jump)
			{
				++daycount;
				jump=len;
			}
		}
		if(jump==1)
		cout<<0<<"\n";
		else
		cout<<daycount<<"\n";
	}
	return 0;
}
