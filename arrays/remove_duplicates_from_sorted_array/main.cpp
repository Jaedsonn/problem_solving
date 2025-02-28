#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

int removeDuplicates(vector<int>& nums) {
    nums.push_back(-101);
    vector<int> res;
    int i = 0;
    int j = 0;

    while(i < nums.size() - 1){

        if (nums.size() == 1 || nums.size() == 0){
            return nums.size();
        }

        if(j >= nums.size()){
            j = i;
        }

        if(nums[i] == nums[j]){
            j+=1;
            continue;
        }

        if(nums[i] != nums[j]){
            res.push_back(nums[i]);
            i = j;
        }

    }
        nums = res;
        return nums.size();
    };
};

int main(){
    vector<int> example {0,0,1,1,1,2,2,3,3,4};
    Solution sl = Solution();
    int result = sl.removeDuplicates(example);
    cout << result << endl;
    return 0;
}