#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,x,n,s,i;
	for(cin>>t;t--;)
	{
		cin>>n>>x>>s;
		int coin=x,a,b;
		for(i=0;i<s;++i)
		{
			cin>>a>>b;
			if(a==coin)
			{
				coin=b;
				continue;
			}
			if(b==coin)
				coin=a;
		}
		cout<<coin<<"\n";
	}
	return 0;
}
