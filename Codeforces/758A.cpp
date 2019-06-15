#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long int n;
	cin>>n;
	long int a[n];
	long int max,S=0;
	
	for(long int i=0;i<n;++i)
		cin>>a[i];
	
	sort(a,a+n);
	max=a[n-1];
	
	for(long int i=0;i<n;++i)
	{
		S = S + (max-a[i]);
	}
	
	cout<<S<<endl;
	return 0;
}
