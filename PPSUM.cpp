#include<bits/stdc++.h>
using namespace std;
int sum(int num)
{
	return num*(num+1)/2;
}
int main()
{
	int t,d,n;
	for(scanf("%d",&t);t--;)
	{
		scanf("%d%d",&d,&n);
		int add,temp;
		if(d==1)
		add=sum(n);
		else
		{
			add=sum(n);
			while(d>1)
			{ 
			add=sum(add);
			--d;
		    }
		}
		printf("%d\n",add);
	}
	return 0;
}
	
