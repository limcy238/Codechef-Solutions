#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int t,i;string s;
    for(cin>>t;t--;)
    {
    	cin>>s;
    	int count=0,k=0;
    	for(i=0;i<s.length()-1;++i)
    	{
    		if(s[i]=='<' and s[i+1]=='>')
			++count;
    	}
    	cout<<count<<endl;
    }
    return 0;
}
    	
	        
    	
    		
