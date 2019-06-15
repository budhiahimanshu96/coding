/*  */
#include<bits/stdc++.h>

using namespace std;

void check(long long a){
cout<<a<<endl;
}
long long int gcd(long long int a, long long int b){
    if (b != 0)
       return gcd(b, a % b);
    else
       return a;
}
long long int lcm(long long int a, long long int b){
    return (a*b)/gcd(a, b);
}

vector <long long int> ans;

struct node{
	long long int data;
	struct node* left;
	struct node* centre;
	struct node* right;	
};

struct node* newNode(long long int data){
	struct node* node = (struct node*) malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	node->centre = NULL;
	
	return(node);
}

long long int getLeafCount(struct node* node){
	if(node==NULL)
		return 0;
	if(node->left==NULL && node->centre==NULL && node->right==NULL)
		return 1;
	else 
		return getLeafCount(node->left)+getLeafCount(node->centre)+getLeafCount(node->right);
}

struct node* makingTree(node* node){
	
	if(node->data==0||node->data==1)
		return node;
	else{
		long long int a,b,c,d;
		a = node->data;
		b = a/2;
		c = a%2;
		d = a/2;
		struct node* nLeft = newNode(b);
		struct node* nCentre = newNode(c);
		struct node* nRight = newNode(d);
		node->left = nLeft;
		node->centre = nCentre;
		node->right = nRight;
		
		if((node->left->data!=1)||(node->left->data!=0)){
			long long int temp1 = node->left->data;
			struct node* n = newNode(temp1);
			makingTree(n);
			
			node->left = n;
		}
		if((node->centre->data!=1)||(node->centre->data!=0)){
			long long int temp2 = node->centre->data;
			struct node* n = newNode(temp2);
			makingTree(n);
			
			node->centre = n;
		}
		if((node->right->data!=1)||(node->right->data!=0)){
			long long int temp3 = node->right->data;
			struct node* n = newNode(temp3);
			makingTree(n);
			
			node->right = n;
		}
	
		return node;
	}
}

void printLeafNodes(node* node){ 
	if(node==NULL)
		return;
	if(node->left==NULL && node->centre==NULL && node->right==NULL){
		ans.push_back(node->data);
	}
		
	printLeafNodes(node->left);
	printLeafNodes(node->centre);
	printLeafNodes(node->right);
	
}

int main()
{
	// Code here
	long long int n,l,r,final=0;
	cin>>n>>l>>r;
	//n=10;
	//l=3;
	//r=10;
	struct node* no = newNode(n);
	
	//struct node* node;
	no = makingTree(no);
	
	long long int a;
	//cout<<getLeafCount(no)<<endl;	
	
	printLeafNodes(no);
	
	vector<int>::iterator v = ans.begin();
    /*while( v != ans.end()) {
      cout <<*v <<" ";
      v++;
   }*/
   
   	for(long long int i=l-1;i<r;++i){
   		if(ans.at(i)==1)
   		final++;
	   }
	
	cout<<final<<endl;
	return 0;
}

