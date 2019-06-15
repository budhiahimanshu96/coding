#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T)
    {
        long N,K,E,M;
        cin>>N>>K>>E>>M;
        long A[N][E];
        long S[N];
        long R[N-1];

        for(long i=0;i<N;++i)
            S[i]=0;

        for(long i=0;i<N-1;++i)
            {
                for(long j=0;j<E;++j)
                {
                    cin>>A[i][j];
                    S[i]=S[i]+A[i][j];
                }
                R[i]=S[i];
            }

        for(long i=0;i<E-1;++i)
            {
                cin>>A[N-1][i];
                S[N-1]=S[N-1]+A[N-1][i];
            }

        long temp;
        temp=S[N-1];

        sort(R,R+(N-1));

        long temp2;
        temp2=R[N-K];

        if(temp2<temp)
            cout<<"0"<<endl;
        else if(temp2==temp)
            cout<<"1"<<endl;
        else if((temp2>temp)&&((temp2-temp+1)<=M))
            cout<<temp2-temp+1<<endl;
        else
            cout<<"Impossible"<<endl;
        T--;
    }
	return 0;
}
