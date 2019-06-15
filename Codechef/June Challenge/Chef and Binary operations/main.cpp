#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T)
    {
        char A[33],B[33];
        int a,b;
        scanf("%s",&A);
        scanf("%s",&B);
        a=strlen(A);
        b=strlen(B);
        char temp1[a],temp2[a];
        for(int i=0;i<a;++i)
        {
            temp1[i]=0;
            temp2[i]=1;
        }
        if((A==temp1)||(A==temp2)||(a!=b))
            cout<<"Unlucky Chef"<<endl;
        T--;
    }
    return 0;
}
