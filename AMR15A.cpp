#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,t,a[100],even=0,odd=0;
	scanf("%d",&t);
	for(i=0;i<t;++i)
	{
        scanf("%d",&a[i]);
        if(a[i]%2)
		++odd;
	    else
		++even;
	}
		if(odd>=even)
		printf("NOT READY\n");
		else
		printf("READY FOR BATTLE\n");
	return 0;
}
