#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;string a,b;
	for(cin>>t;t--;)
	{
		cin>>a>>b;
		int la=a.length()-1;int lb=b.length()-1;
		if(la==lb and la==0)
		cout<<((int)a[la]+(int)b[lb]-96)%10<<endl;
		else
		{
		if(la>=lb)
		{
	       while(lb>=0)
	       a[la]=((int)a[la--]+(int)b[lb--]-96)%10+48;
	       int i=0;
	       while(a[i]=='0')
	       ++i;
	       if(i==a.length())
	       cout<<0;
	       else
	       for(;i<a.length();++i)
	       cout<<a[i];
	       cout<<endl;
		}
		else if(la<lb)
		{
			while(la>=0)
			b[lb]=((int)a[la--]+(int)b[lb--]-96)%10+48;
		    int i=0;
	        while(b[i]=='0')
	        ++i;
	        if(i==b.length())
	        cout<<0;
	        else
	        for(;i<b.length();++i)
	        cout<<b[i];
	        cout<<endl;
		}
	}
	}
	return 0;
} 

