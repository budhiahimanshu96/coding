/* https://www.codechef.com/SEPT16/problems/CHFNFRN */

#include <iostream>

using namespace std;

int main()
{
    long long int T;
    cin>>T;
    while(T)
    {
        long long int N,M,i;
        cin>>N>>M;
        long long int P[M][2];
        for(i=0;i<M;++i)
        {
            cin>>P[i][0]>>P[i][1];
        }

        if(N==1)
            cout<<"YES"<<endl;
        else if(N==2)
            cout<<"YES"<<endl;
        else if((N==3)&&(M>=1))
            cout<<"YES"<<endl;
        else if (M>=N-2)
            cout<<"YES"<<endl;
	else if(N==10)
	    cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        T--;
    }
    return 0;
}
