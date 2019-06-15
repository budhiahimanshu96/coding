#include <iostream>
using namespace std;
 
int main()
{
    int t;   cin>>t;
    while(t--)
    {
    int n,k,i,p;   cin>>n>>k;   int a[n],b[n];
    for(i=0;i<n;i++)    {cin>>a[i];}
        for(i=0;i<n;i++)
        {
          if(i+k>=n)   {p=(i+k)%n;}
          else        {p=i+k;}
          b[p]=a[i];
        }
        for(i=0;i<n;i++)    {cout<<b[i]<<" ";}
        cout<<endl;
    }
    return 0;
}
