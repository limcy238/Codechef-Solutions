#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	int a[t+1],b[t+1],lead=0,l=-1,i;a[0]=0;b[0]=0;
	for(i=1;i<=t;++i)
	{
		cin>>a[i]>>b[i];
		a[i]+=a[i-1];b[i]+=b[i-1];
		if(a[i]>b[i] and a[i]-b[i]>=lead)
		{
			l=1;lead=a[i]-b[i];
		}
		else if(a[i]<b[i] and b[i]-a[i]>=lead)
		{
			l=2;lead=b[i]-a[i];
		}
	}
	cout<<l<<" "<<lead<<endl;
	return 0;
}

