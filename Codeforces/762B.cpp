#include<bits/stdc++.h>

using namespace std;
int main()
{
	long long int a,b,c,m,i;
	cin>>a>>b>>c>>m;
	long long int tempa=0,tempb=0,tempc=0;
	
	long long int total=0;	
	
	vector<pair<long long int,string> > type;	
	
	for(i=0;i<m;++i)
	{
		long long int input1;
		string input2;
		cin>>input1>>input2;
		type.push_back(make_pair(input1,input2));
	}
	
	
	for (i=0; i<m; ++i)
    {
        cout << type[i].first << " "
             << type[i].second << endl;
    }
    
    sort(type.begin(), type.end(),sortbysecdesc);
    	for (i=0; i<m; ++i)
    {
        cout << type[i].first << " "
             << type[i].second << endl;
    }
	return 0;
}
