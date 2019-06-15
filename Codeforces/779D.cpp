/*  */
#include<bits/stdc++.h>

using namespace std;

void check(long long a){
cout<<a<<endl;
}
long long int gcd(long long int a, long long int b){
    if (b != 0)
       return gcd(b, a % b);
    else
       return a;
}
long long int lcm(long long int a, long long int b){
    return (a*b)/gcd(a, b);
}

#define ll long long int

int main()
{
	// Code here
	//ifstream cin("testcase.txt");
	//ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);	
    
	string t,p;
	cin>>t>>p;
	
	ll len1,len2,a[26]={0},b[26]={0},i;
	
	len1=t.size();
	len2=p.size();
	
	ll A[len1];
	
	for(i=0;i<len1;++i)
		cin>>A[i];
	
	for(i=0;i<len1;++i)
		a[(int)t[i]-97]++;
		
	for(i=0;i<len2;++i)
		b[(int)p[i]-97]++;	
	
		
	
	return 0;
}

