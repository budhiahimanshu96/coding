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
#define mod 1000000007
int main()
{
	//Input file
	ifstream cin("testcase.txt");
	//Output file
	ofstream cout("output.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Always the question asked in google code jam/apac are in this manner only.
	int t;
	cin>>t;
	int count1=0;
	while(t--)
	{
		//Code here
		ll R,C;
		cin>>R>>C;
		ll ans;
		if(R==2)
			ans = c-1;
		else if(c==2)
			ans = R-1;
		else{
			 
			
		}
		
		count1++;
		ans=ans%mod;
		cout<<"Case #"<<count1<<": "<<ans;
		//Final Answer
		cout<<endl;
	}
	return 0;
}


