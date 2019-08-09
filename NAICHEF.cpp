#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,n,a,b;
	for(cin>>t;t--;)
	{
		cin>>n>>a>>b;
		int x[n],i;double p1=0,p2=0;
		for(i=0;i<n;++i)
		{
			cin>>x[i];
			if(x[i]==a)
				++p1;
			if(x[i]==b)
				++p2;
		}
		double d=(p1/n)*(p2/n);
		cout<<d<<"\n";
	}
	return 0;
}
