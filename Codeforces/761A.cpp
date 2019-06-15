/*  */
#include<bits/stdc++.h>

using namespace std;

void check(long long a){
cout<<a<<endl;
}
long long long long int gcd(long long long long int a, long long long long int b){
    if (b != 0)
       return gcd(b, a % b);
    else
       return a;
}
long long long long int lcm(long long long long int a, long long long long int b){
    return (a*b)/gcd(a, b);
}

long long int main(){
	// Code here
	long long int a,b;
	cin>>a>>b;
	if((fabs(a-b)>1)||((a==0)&&(b==0)))
		cout<<"NO"<<endl;
	else if	(fabs(a-b)<=1)
		cout<<"YES"<<endl;
		
	return 0;
}

