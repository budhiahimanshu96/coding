#include<bits/stdc++.h>

using namespace std;

int main()
{
	ifstream cin("testcase.txt");
    long long int t,n,i,j,temp,x,sum1;
    cin>>t;
    for(i=0;i<t;i++)
    {
        sum1=0;
        cin>>n;
        long long int arr[n];
        for(j=0;j<n;j++)
        {
            cin>>arr[j];
            sum1=sum1+arr[j];
        }
        long long int arr1[n];
        long long int arr2[n];
        long long int arr3[n];
        temp=1;
        for(j=0;j<n;j++)
        {
            if(temp<=arr[j])
            {
                arr1[j]=temp;
            }
            else
            {
                arr1[j]=arr[j];
                temp=arr[j];
            }
            temp++;
        }
        temp=1;
        for(j=(n-1);j>=0;j--)
        {
            if(temp<=arr[j])
            {
                arr2[j]=temp;
            }
            else
            {
                arr2[j]=arr[j];
                temp=arr[j];
            }
            temp++;
        }
        for(j=0;j<n;j++)
        {
            if(arr1[j]<=arr2[j])
            {
                arr3[j]=arr1[j];
            }
            else
            {
                arr3[j]=arr2[j];
            }
        }
        x=0;
        for(j=0;j<n;j++)
        {
            if(arr3[j]>x)
            {
                x=arr3[j];
            }
        }
        int sum2=0;
        for(j=0; j<=(x-1);j++)
        {
            sum2=sum2+j;
        }
        sum2=sum2*2;
        sum2=sum2+x;
        cout<<(sum1-sum2)<<endl;


    }
    return 0;
}
