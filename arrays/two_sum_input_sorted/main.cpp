#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            
            int l = 0, r = nums.size() - 1;
            
            while(l <= r){
                int m = l + (r - l) / 2;

                if(m == i) {  
                    if(m + 1 <= r) m++; 
                    else break;
                }

                if(nums[m] == complement){
                    return {(i+1), (m+1)};  
                }

                if(nums[m] < complement) 
                    l = m + 1;
                else 
                    r = m - 1;
            }
        }
        return {}; 
    }
};


int main(){
    vector<int> test {0,4,3,0};
    Solution sl = Solution();
    vector<int> result = sl.twoSum(test, 0);

    for(int i:result){
        cout << i << " ";
     }
     cout << endl;
    
    return 0;
}