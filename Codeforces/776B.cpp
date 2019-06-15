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
	long long int n,i,j;
	cin>>n;
  	long long int prime[n+2]={0};

    for (i=2; i<sqrt(n)+2; ++i)
    {
        if (prime[i] == 0)
        {
            for (j=i*2; j<n+2; j += i){
                prime[j]=1;
            }
        }
    }
    if(n<=2)
    cout<<1<<endl;
    else
        cout<<2<<endl;
    for(i=2;i<n+2;i++)
        cout<<prime[i]+1<<" ";
	
	
	return 0;
}

