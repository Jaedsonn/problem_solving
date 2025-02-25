//ou are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
//Find two lines that together with the x-axis form a container, such that the container contains the most water.
//return the maximum amount of water a container can store.
//Notice that you may not slant the container.



#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        int maxArea(vector<int>& height) {
            int area=0;
            for(int i = 0; i < height.size(); i++){
                for(int j = 1; j < height.size(); j++ ){
                    if (height[i] == height[j])
                    {
                        printf("%d e %d\n", height[i], height[j]);
                    }
                    
                }
            }
            return area;
        }
    };


int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    Solution sl = Solution();
    sl.maxArea(height);
    return 0;
}
