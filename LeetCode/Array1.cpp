// erasing from vector
#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int n,i;
    int ans = 1;
    n = nums[0];
    //cout<<nums.size();
    for(i=1;i<=nums.size();++i){
        //cout<<i<<" ";
        if(nums[i] != n){
            ans++;
            n = nums[i];
        }
        else{
            nums.erase(nums.begin()+i);
        }
    }
    //cout<<ans;
    return ans;
}

int main ()
{
    std::vector<int> myvector;

    myvector.push_back(1);
    myvector.push_back(1);
    myvector.push_back(1);
    myvector.push_back(1);
    myvector.push_back(2);

	int len = removeDuplicates(myvector);
	
	for (int i = 0; i < len; i++) {
	    cout<<myvector[i];
	}

  return 0;
}
