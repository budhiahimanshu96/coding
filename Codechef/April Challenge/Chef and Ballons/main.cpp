/* https://www.codechef.com/APRIL16/problems/CHBLLNS */

#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T)
    {
        long long ans=0;
        long long n[3]={0};
        for(int i=0;i<3;++i)
            cin>>n[i];
        long k;
        cin>>k;
        long long temp=k;
        if(k==1)
        {
            ans=1;
        }
        else
        {
            while(temp-1)
            {
                long long a=0;
                for(int i=0;i<3;++i)
                    if(n[i]>0)
                        a++;
                ans=ans+a;
                for(int i=0;i<3;++i)
                    n[i]--;
                temp--;
            }
        ans++;
        }
        cout<<ans<<endl;

        T--;
    }
    return 0;
}
