#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
	int t;string s;
	for(cin>>t;t--;)
	{
		cin>>s;
		int l=s.length();
		int sum=(int)s[l-1]+(int)s[0]-96;
		cout<<sum<<endl;
	}
	return 0;
}
