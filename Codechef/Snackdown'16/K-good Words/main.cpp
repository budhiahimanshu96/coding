/* https://www.codechef.com/SNCKQL16/problems/KGOOD */

#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T)
    {
        char str[100002],w[100000];
        long k,i=0;
        gets(str);
        while(str[i]!=' ')
        {
            w[i]=str[i];
            i++;
        }
        k = str[i+1] - 48;
        cout<<endl<<w<<" "<<k<<endl;
        T--;
    }
    return 0;
}
