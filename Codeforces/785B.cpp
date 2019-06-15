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

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
	//Code here
	
	ll n,m,i,temp1,temp2,j;
	vector<pair<ll,ll> > A;
	vector<pair<ll,ll> > B;
	
	cin>>n;
	for(i=0;i<n;++i){
		cin>>temp1>>temp2;
		A.push_back(make_pair(temp1,temp2));	
	}

	cin>>m;
	for(i=0;i<m;++i){
		cin>>temp1>>temp2;
		B.push_back(make_pair(temp1,temp2));	
	}
	
	ll max=0;
	ll A1,A2,B1,B2;	
	
	sort(A.begin(),A.end());
	A1=A.at(0).first;
	for(i=1;i<n;++i){
		if(A1 < A.at(i).first)
		A1=A.at(i).first;
	}

	sort(B.begin(),B.end());
	B1=B.at(0).first;
	for(i=1;i<m;++i){
		if(B1 < B.at(i).first)
		B1=B.at(i).first;
	}
	
	
	sort(A.begin(),A.end(),sortbysec);
	A2=A.at(0).second;
	for(i=1;i<n;++i){
		if(A2 > A.at(i).second)
		A2=A.at(i).second;
	}

	sort(B.begin(),B.end(),sortbysec);
	B2=B.at(0).second;
	for(i=1;i<m;++i){
		if(B2 > B.at(i).second)
		B2=B.at(i).second;
	}

	temp1 = B1-A2;
	temp2 = A1-B2;
	
	if(temp1>max)
		max=temp1;
	if(temp2>max)
		max=temp2;

/*	for(i=0;i<n;++i){
		for(j=0;j<m;++j){
			ll temp;

			temp = B.at(j).first - A.at(i).second;
			
			if(temp>max)
				max=temp;

			temp = A.at(i).first - B.at(j).second;
			
			if(temp>max)
				max=temp;
		}
	}
*/

//	cout<<A1<<A2<<B1<<B2<<endl;	
	cout<<max<<endl;	
	return 0;
}


