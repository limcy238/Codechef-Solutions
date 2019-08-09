#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;string str;
	for(cin>>t;t--;)
	{
	   cin>>str;
	   int i,l=str.length();int count=0;
	   for(i=0;i<l;++i)
	   {
	   	if(str[i]=='A' or str[i]=='D' or str[i]=='O' or str[i]=='P' or str[i]=='Q' or str[i]=='R')
	   	++count;
	   	if(str[i]=='B')
	   	count+=2;
	   }
	   printf("%d\n",count);
	}
	return 0;
}
