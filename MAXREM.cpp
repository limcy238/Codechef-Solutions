#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	long int a[n],b[n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	int x=0,y=0;
	long int max=0;
	while(x<n and y<n)
	{
		if((a[x]%b[y])>=max)
			max=a[x]%b[y];
		if(a[x]<b[y])
			x++;
		else
			y++;
	}
	cout<<max<<"\n";
	return 0;
}
