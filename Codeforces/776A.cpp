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


int main()
{
	// Code here
	
	string s[2];
	long long int n;
	cin>>s[0]>>s[1];
	cin>>n;
	string a[n][2];

	for(int i=0;i<n;++i){
		cin>>a[i][0]>>a[i][1];
	}
	
	cout<<s[0]<<" "<<s[1]<<endl;
	
	for(int i=0;i<n;++i){
		if(a[i][0]==s[0])
			s[0] = a[i][1];
		else if(a[i][0]==s[1])
			s[1] = a[i][1];
			cout<<s[0]<<" "<<s[1]<<endl;			
	}


	return 0;
}

