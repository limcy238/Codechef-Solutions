#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,t;string s;
	scanf("%d",&t);
	while(t--)
	{
		cin>>s;
		int n=s.length();
		int flag=0;
		for(i=0;i<n-2;++i)
		{
			if((s[i]==s[i+2])or(s[i]==s[i+1]))
			{
				printf("YES\n");break;
			}
			
	    }
			if(flag==0)
			if(s[n-1]==s[n-2])
			    {
				printf("YES\n");
				}
			  else
			   {
				 printf("NO\n");
			   }
		}
	return 0;
}
