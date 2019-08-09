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
		int p1,p2,k;
		cin>>p1>>p2>>k;
		if(((p1+p2)/k)%2==1)
			cout<<"COOK\n";
		else
			cout<<"CHEF\n";
	}
	return 0;
}
