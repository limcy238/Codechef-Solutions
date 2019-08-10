#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,num,i,sum=0;
	scanf("%d",&n);
	int k=n*(n+1)/2;
	for(i=0;i<n;++i)
	{
		scanf("%d",&num);
		sum=sum+num;
	}
	if(sum==k)
	printf("YES\n");
	else
	printf("NO\n");
	return 0;
}
	
