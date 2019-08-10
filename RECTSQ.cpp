#include<bits/stdc++.h>
using namespace std;
int hcf(int n1,int n2)
{
	while(n1!=n2)
	{
		if(n1>n2)
		n1-=n2;
		else
		n2-=n1;
	}
	return n1;
}
int main()
{
	int t,n,m;
	for(scanf("%d",&t);t--;)
	{
		scanf("%d%d",&n,&m);
		int hcff=hcf(n,m);
		int x=n/hcff;
		int y=m/hcff;
		printf("%d\n",x*y);
	}
	return 0;
}
