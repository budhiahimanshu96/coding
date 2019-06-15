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
	long long int n,i,j,temp1,temp2,temp3,flag=0;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;++i)
		cin>>a[i];
	
	sort(a,a+n);
	
		
	for(i=n-1;i>=2;--i){
		temp1 = a[i] - a[i-1];
		if(temp1<a[i-2]){
			flag = 1;
			break;
		}
	}
	
	if(flag==1)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
		
	return 0;
}

