/* https://www.codechef.com/SEPT16/problems/DIVMAC */

#include <iostream>
#include<math.h>
using namespace std;

bool isprime(long int prime)
{
     for (long int i=2;i<sqrt(prime);i++)
     {
         if (prime%i==0)
            return(false);
     }
     return(true);
}

long int LeastPrimeDivisor(long int n)
{
    if(n==4)
        return 2;
    else if(isprime(n))
        return n;
    else
    for (long int i=2;i<sqrt(n);i++)
    {
        if (n%i==0)
        {
            if (isprime(i));
               return(i);
        }
    }
}

long int maxi(long int a,long int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    long int T;
    cin>>T;
    while(T)
    {
        long int N,M;
        cin>>N>>M;
        long int A[N];
        for(long int i=0;i<N;++i)
            cin>>A[i];
        while(M)
        {
            long int a,b,c;
            cin>>a>>b>>c;
            b=b-1;
            if(a==0)
            {
                for(long int i=b;i<c;++i)
                {
                    A[i]=A[i]/LeastPrimeDivisor(A[i]);
                }
                /*cout<<endl;
                for(long int i=0;i<N;++i)
                    cout<<A[i]<<" ";
                cout<<endl;*/
            }
            if(a==1)
            {
                long int result=1;
                for(long int i=b;i<c;++i)
                {
                    result=maxi(result,LeastPrimeDivisor(A[i]));
                }
                cout<<result<<" ";
            }
            M--;
        }
        cout<<endl;
        T--;
    }
    return 0;
}
