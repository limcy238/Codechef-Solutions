#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,n,k,i;
	for(cin>>t;t--;)
	{
		cin>>n>>k;
		int a[n],mex=0,s[200001]={0},count=-1;
		for(i=0;i<n;++i)
		{
			cin>>a[i];
			s[a[i]]=1;
		}
		for(i=0;;++i)
		{
			if(s[i]==0)
			{
				mex=i;++count;
			}
			if(count==k)
			break;
		}
		cout<<mex<<endl;
	}
	return 0;
}
		

