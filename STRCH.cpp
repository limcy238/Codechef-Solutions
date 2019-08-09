#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	for(cin>>t;t--;)
	{
		long int n;
		cin>>n;
		char s[n],x;
		cin>>s>>x;
		long int count=0;
		for(int i=0;i<n;++i)
		{
			for(int j=i;j<n;++j)
			{
				if(s[j]==x)
				{
				count+=(n-j);
				break;
				}
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}
