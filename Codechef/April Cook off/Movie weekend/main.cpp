/* https://www.codechef.com/COOK69/problems/MOVIEWKN */

#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T)
    {
        long long n,i;
        cin>>n;
        long long L[n],R[n],P[n],A[n],maxi,ans,cnt=0;
        for(i=0;i<n;++i)
            cin>>L[i];
        for(i=0;i<n;++i)
            cin>>R[i];
        for(i=0;i<n;++i)
            P[i]=L[i]*R[i];
        maxi=P[0];
        ans=0;
        for(i=1;i<n;++i)
            if(P[i]>maxi)
                {
                    ans=i;
                    maxi=P[i];
                }
        A[n]={0};
        for(i=0;i<n;++i)
            if(P[i]==maxi)
                    A[i]++;
        /* Initially assign cnt*/
        for(i=0;i<n;++i)
            if(A[i]==1)
                cnt++;

        if(cnt==1)
            cout<<ans+1<<endl;
         else if(cnt>1)


        T--;

    }

    return 0;

}
