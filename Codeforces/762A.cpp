#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int k,n,temp=0,i,cnt=0;
	cin>>n>>k;

   vector<long long int> v;
	for(i=1;i<=sqrt(n)+1;i++)
	{
		if(n%i==0) 
		{
			if(n/i==i)
			{
			v.push_back(i);
			temp++;
			}
			else
			{
				v.push_back(i);
				v.push_back(n/i);
				temp+=2;
			}
		}
	}
	
	set<long long int> ans;

	for(i=0;i<v.size();++i)
		ans.insert(v.at(i));
		
	vector<long long int> f(ans.begin(),ans.end());
	sort(f.begin(),f.end());
	
	if(k-1>f.size()-1)
		cout<<"-1"<<endl;
	else
		cout<<f.at(k-1)<<endl;
	return 0;
}
