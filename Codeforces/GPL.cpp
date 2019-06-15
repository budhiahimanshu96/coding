#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

#define FALSE -1
#define TRUE 1
#define NULL 0

int &fun(){
	static int a=10;
	return a;
}
int main(){
	int a,b=10;
	a = -b--;
	cout<<a<<" "<<b;
	
	return 0;
}
