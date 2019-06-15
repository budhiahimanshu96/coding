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
	//Input file
	//Always the question asked in google code jam/apac are in this manner only.
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll A[n],i;
		for(i=0;i<n;++i)
			cin>>A[i];
			
		sort(A,A+n);
		
		if(A[1]==A[0]){
			cout<<A[0]<<endl;
		}
		else if(A[1]-A[0]>1){
			cout<<A[0]<<endl;
		}
		else if(A[n-1]==A[n-2]){
			cout<<A[n-1]<<endl;
		}
		else if(A[n-1]-A[n-2]>1){
			cout<<A[n-1]<<endl;
		}
		else{
			i=2;
			ll flag=1;
			while(flag){
				if(A[i]==A[i-1]){
					cout<<A[i]<<endl;
					flag=0;	
				}
				i++;
			}
			
		}
		
		
	}
	return 0;
}


