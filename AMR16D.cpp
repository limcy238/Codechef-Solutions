#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,n,k;
	for(cin>>t;t--;)
	{
		cin>>n>>k;
		float num=ceil(k/3.0);
		float num1=ceil((k+1)/3.0);
	//	cout<<num<<" "<<num1<<"\n";
		if(num==num1)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
	return 0;
}
