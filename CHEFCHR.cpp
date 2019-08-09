#include<bits/stdc++.h>
using namespace std;
int check(char ch)
{
	if(ch=='c' or ch=='h' or ch=='e' or ch=='f')
	return 1;
	else
	return 0;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;string s;
	for(cin>>t;t--;)
	{
		cin>>s;
		int l=s.length(),i,count=0;
		for(i=0;i<(l-3);++i)
		{
			if(check(s[i]))
			    if(check(s[i+1]) and s[i+1]!=s[i])
			        if(check(s[i+2]) and s[i+2]!=s[i] and s[i+2]!=s[i+1])
			            if(check(s[i+3]) and s[i+3]!=s[i] and s[i+3]!=s[i+1] and s[i+3]!=s[i+2])
					++count;
		}
		if(count==0)
		cout<<"normal"<<endl;
		else
		cout<<"lovely "<<count<<endl;
	}
	return 0;
}
