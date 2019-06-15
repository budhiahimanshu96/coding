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
	//Code here
	
	ll m,n;
	cin>>n>>m;
	ll temp,i=0;
	temp=n;
/*	while(1){
		i++;
		n=n-i;
		if(n<=0)
			break;
		
		n=n+m;
		if(n>temp)
		n=temp;		
	}
		
	cout<<i<<endl;
*/
	ll l=1,r=1e9,mid;
	
	while(l<=r){
		mid=(l+r)/2;
		
		n = n + (mid-1)*m - (mid*(mid+1)/2);
		
		if(n==0)
			break;
		else if(n>0)
			l=mid+1;
		else if(n<0)
			r=mid-1;		
	}
	
	cout<<mid<<endl;
	
	return 0;
}


