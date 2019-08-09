#include<bits/stdc++.h>
using namespace std;
int gcd(int n1,int n2)
{
	if(n1==0)
	return n2;
	return gcd(n2%n1,n1);
}
int main()
{
	int t,n;
	for(scanf("%d",&t);t--;)
	{
		scanf("%d",&n);
		int a[n],i,gcdd;
		scanf("%d%d",&a[0],&a[1]);
		gcdd=gcd(a[0],a[1]);
		for(i=2;i<n;++i)
		{
			scanf("%d",&a[i]);
			gcdd=gcd(gcdd,a[i]);
		}
		for(i=0;i<n;++i)
		printf("%d ",a[i]/gcdd);
		printf("\n");
	}
	return 0;
	
}
