#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,count,i;
	for(scanf("%d",&t);t--;)
	{
		string str;
		cin>>str;
		count =0;
		for(i=0;str[i]!='\0';++i)
		{
			if(str[i]=='4')
			++count;
		}
		
		printf("%d\n",count);
	}
	return 0;
}
