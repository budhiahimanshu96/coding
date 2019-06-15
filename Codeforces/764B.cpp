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
	long long int i,n;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;++i)
		cin>>a[i];
		

	for(i=0;i<n/2;i+=2){
		swap(a[i],a[n-1-i]);
	}
	
/*	if(n%2==0)
		{
			temp2=n/2;
			temp2=temp2+1;
			temp1=temp2-3;
			for(i=temp1,j=temp2;i>=0;i=i-2,j=j+2){
				swap(a[i],a[n-1-i]);
			}
		}	

	else if(n%2!=0)
		{
			temp1=n/2;
			temp1=temp1-1;
			temp2=temp1+2;
			for(i=temp1,j=temp2;i>=0;i=i-2,j=j+2){
				swap(a[i],a[n-1-i]);
			}
		}
*/		
	for(i=0;i<n;++i)
		cout<<a[i]<<" ";

		
	return 0;
}

