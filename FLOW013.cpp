#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b,c;
	for(scanf("%d",&t);t--;)
	{
		scanf("%d%d%d",&a,&b,&c);
		if((a+b+c)==180)
		{
			if(a!=0 and b!=0 and c!=0)
			printf("YES\n");
			else
			printf("NO\n");
	    }
		else
		printf("NO\n");
	}
	return 0;
}
