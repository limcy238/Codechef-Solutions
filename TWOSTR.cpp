#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	char x[10],y[10];
	for(scanf("%d",&t);t--;)
	{
		scanf("%s",x);
		scanf("%s",y);
		int i,flag=0;
		for(i=0;x[i]!='\0';++i)
		{
			if(x[i]=='?' or x[i]==y[i] or y[i]=='?')
			++flag;
		}
		if(flag==i)
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
}
