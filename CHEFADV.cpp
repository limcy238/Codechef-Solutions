#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long int t,n,m,x,y;
	for(cin>>t;t--;)
	{
		cin>>n>>m>>x>>y;
		--n;--m;
		int flag=0;
		if((n%x==1 and m%y==1) or (n%x==0 and m%y==0) or ((n-1)%x==0 and (n-1)>=0 and m%y==1) or (n%x==1 and (m-1)%y==0) and (m-1)>=0 ) 
			flag=1;
		if(flag==1)
			cout<<"Chefirnemo\n";
		else
			cout<<"Pofik\n";
	}
	return 0;
}
