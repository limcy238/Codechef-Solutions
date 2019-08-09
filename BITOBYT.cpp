#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long int t,n;
	int k,rem ;
		long long int twopow[62]={0};
		twopow[0]=1;
		for(int i=1;i<62;++i)
			twopow[i]=twopow[i-1]*2;
	for(cin>>t;t--;)
	{
		cin>>n;
		//cout<<n%26;		
		if(n%26==0)
		{
			int k=n/26;
			cout<<"0 0 "<<twopow[k-1]<<"\n";
			continue;
		}
		else
		{
		k=n/26; 
		rem=n%26;
		if(rem>=1 and rem<=2)
			cout<<twopow[k]<<" 0 0\n";
		else if(rem>=3 and rem<=10)
			cout<<"0 "<<twopow[k]<<" 0\n";
		else if(rem>=11 and rem<=25)
			cout<<"0 0 "<<twopow[k]<<"\n";
		}
	}
	return 0;
}
