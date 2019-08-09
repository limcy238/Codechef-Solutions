#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,n;double p,q,d;
	for(cin>>t;t--;)
	{
		cin>>n;
		int i;
	    double loss=0.0;
		for(i=0;i<n;++i)
		{
			cin>>p>>q>>d;
			double newp=p+(d/100)*p;
			double np=newp-(d/100)*newp;
			loss+=(p-np)*q;
		}
		cout<<setw(5)<<fixed<<loss<<"\n";
	}
}

