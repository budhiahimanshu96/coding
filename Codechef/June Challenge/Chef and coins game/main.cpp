#include <iostream>

using namespace std;

int isPrime(int N)
{
    if(N==1)
        return 1;
    for (int i = 2; i <= N/2; i++)
        {
            if ((N % i) == 0)
                return 0;
        }
        return 1;
}

int isPrimePower(int N)
{

}
int main()
{
    int T;
    cin>>T;
    while(T)
    {
        int N;
        int flag=0;
        cin>>N;
        if((isPrime(N))==1)
            flag=1;

        if((isPrimePower(N))==1)
            flag=1;

        if(flag==1)
            cout<<"Chef"<<endl;
        else
            cout<<"Misha"<<endl;
        T--;
    }
    return 0;
}
