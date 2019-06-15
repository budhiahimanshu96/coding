#include <bits/stdc++.h>
using namespace std;

vector<int> answer1;
int result1(string ab,int z[])
{
	int n=ab.size(),l=0,r=0,k,i;
	for(i=1;i<n;i++)	{
		if(i>r)	{
			l=r=i;
			while(r<n && ab.at(r-l)==ab.at(r))
				r++;
			z[i]=r-l;
			r--;
		}
		else	{
			k=i-l;
			if(z[k]<r-i+1)
				z[i]=z[k];
			else{
				l=i;
				while(r<n && ab.at(r-l)==ab.at(r))
					r++;
				z[i]=r-l;
				r--;
				}
		}
	}
}

int search(string a,string b){	
	string c=b+"$"+a;
	int l=c.size(),z[l+1]={0},i;
	result1(c,z);
	for(i=0;i<l;i++){
		if(z[i]==b.size())		answer1.push_back(i-b.size()-1);
	}
}
long long int result(long long int a,long long int b){
	long long int res=0; 
	while(b>0){
		if(b&1)		res=res+a;
		a=a<<1;
		b=b>>1;	}
	return res;	
	}
int pow(int x,int n,int m){
   int result=1;
   while(n>0){
       if(n % 2 ==1)
           result=(result*x)%m;
       x=(x*x)%m;
       n=n>>2;}
   return result;
}
int knapSack(int W, int wt[], int val[], int n){
  int i, w, K[n+1][W+1];   // Build table K[][] in bottom up manner
  for (i = 0; i <= n; i++)  {
      for (w = 0; w <= W; w++){
          if (i==0 || w==0)              K[i][w] = 0;
          else if (wt[i-1] <= w)                K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
          else                K[i][w] = K[i-1][w];
      }
  }
  return K[n][W];
}

void printPascal(int n)
{
for (int line = 1; line <= n; line++)
{
	int C = 1; // used to represent C(line, i)
	for (int i = 1; i <= line; i++) 
	{
	printf("%d ", C); // The first value in a line is always 1
	C = C * (line - i) / i; 
	}
	printf("\n");
}
}

int phi(int n) {
   int res = n;
   for (int i = 2; i * i <= n; ++i) {
       if (n % i == 0) {
           while (n % i == 0) {
               n /= i;           }
           res -= res / i;   }	  }
   if (n != 1) {
       res -= res / n;   }
   return res;
}


int main(){
	
	cout<<phi(1);
return 0;
}
