#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i;
	for(scanf("%d",&t);t--;)
	{
		scanf("%d",&n);
		int l[n],r[n];
		for(i=0;i<n;++i)
		scanf("%d",&l[i]);
		for(i=0;i<n;++i)
		scanf("%d",&r[i]);
		int max=l[0]*r[0];
		int index=0,rate=r[0];
		for(i=1;i<n;++i)
		{
			if(l[i]*r[i]>max)
			{
				index=i;rate=r[i];
				max=l[i]*r[i];
			}
			if(l[i]*r[i]==max)
			{
				if(r[i]>rate)
				{
					index=i;rate=r[i];
                }
				max=l[i]*r[i];
			}
		}
		printf("%d\n",++index);
	}
	return 0;
}
	    
