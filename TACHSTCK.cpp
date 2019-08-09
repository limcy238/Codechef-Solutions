#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,d;
	cin>>n>>d;
	int a[n],i;
	for(i=0;i<n;++i)
	cin>>a[i];
	sort(a,a+n);
	int paircnt=0;
	for(i=0;i<(n-1);++i)
	{
		if((a[i+1]-a[i])<=d)
		{
			++paircnt;++i;
		}
	}
	cout<<paircnt;
	return 0;
}
