#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	for(scanf("%d",&t);t--;)
	{
		scanf("%d",&n);
		int k=n%8;
		if(k==1)
		printf("%dLB\n",n+3);
		if(k==2)
		printf("%dMB\n",n+3);
		if(k==3)
		printf("%dUB\n",n+3);
		if(k==4)
		printf("%dLB\n",n-3);
		if(k==5)
		printf("%dMB\n",n-3);
		if(k==6)
		printf("%dUB\n",n-3);
		if(k==7)
		printf("%dSU\n",n+1);
		if(k==0)
		printf("%dSL\n",n-1);
	}
	return 0;
	
}
