#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int t,n;
	for(cin>>t;t--;)
	{
		cin>>n;int count=0;
		while(n!=0)
		{
			if(n>=100)
			{
				count+=n/100;
				n=n%100;
			}
			else if(n>=50)
			{
				count+=n/50;
				n=n%50;
			}
			else if(n>=10)
			{
				count+=n/10;
				n=n%10;
			}
			else if(n>=5)
			{
				count+=n/5;
				n=n%5;
			}
			else if(n>=2)
			{
				count+=n/2;
				n=n%2;
			}
			else if(n>=1)
			{
				count+=n/1;
				n=n%1;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
