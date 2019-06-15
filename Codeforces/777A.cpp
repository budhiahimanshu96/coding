
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
	long long int n,x;
	cin>>n>>x;
	
	long long int ans[6][3];
	ans[0][0]=0;
	ans[0][1]=1;
	ans[0][2]=2;
	ans[1][0]=1;
	ans[1][1]=0;
	ans[1][2]=2;
	ans[2][0]=1;
	ans[2][1]=2;
	ans[2][2]=0;
	ans[3][0]=2;
	ans[3][1]=1;
	ans[3][2]=0;
	ans[4][0]=2;
	ans[4][1]=0;
	ans[4][2]=1;
	ans[5][0]=0;
	ans[5][1]=2;
	ans[5][2]=1;

	n = n%6;
	cout<<ans[n][x]<<endl;
	
	return 0;
}

