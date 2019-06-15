#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int N,Q;
    cin>>N>>Q;
    int A[N];
    for (int i=0;i<N;i++)
        cin>>A[i];
    sort(A,A+N);
    while(Q)
    {
        int t,min=A[0],max=A[N-1];
        cin>>t;

        if((t>=min) && (t<=max))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        Q--;
    }
	return 0;
}
