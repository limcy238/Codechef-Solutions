#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i=1,inp,count=0;
	scanf("%d %d",&n,&k);
	while(i<=n)
	{
		scanf("%d",&inp);
		++i;
		if(inp%k==0)
		count++;
	}
	printf("%d",count);
	return 0;
}
