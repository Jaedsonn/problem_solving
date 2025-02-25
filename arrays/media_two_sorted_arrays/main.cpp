//Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
//The overall run time complexity should be O(log (m+n)).

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
    public:

    vector<int> merge_and_sort(
        vector<int> &A,
        vector<int> &B,
        vector<int> &result,
        int i = 0, int j = 0)
        {
        int ALength = A.size(); // 4 bytes
        int BLength = B.size(); // 4 bytes
        vector<int> C = result; // size*4bytes

        if (i == ALength)
        {
            while (j < BLength)
            {
                C.push_back(B[j]);
                j += 1;
            }
            return C;
            
        }

        if (j == BLength)
        {
            while (i < ALength)
            {
                C.push_back(A[i]);
                i += 1;
            }
            return C;
            
        }

        if(A[i] < B[j]){ 
            C.push_back(A[i]);
            i += 1;
        } else{
            C.push_back(B[j]);
            j += 1;
        }

        return merge_and_sort(A, B, C, i,j);
    }

        double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
            vector<int> aux;
            vector<int> merged = merge_and_sort(nums1, nums2, aux);

            int Mlength = merged.size();

            if(Mlength % 2 == 0){
                int i = Mlength/2 - 1;
                int j = (Mlength/2);

                double r = (merged[j] + merged[i])/ 2.0;
                return r;

            } else{
                double i = ceil(Mlength/2.0);
                return merged[i];
            }
            
        }
    };



int main(){

    vector<int> A = {1, 2};
    vector<int> B = {3,4};
    vector<int> result;

    Solution sl = Solution();
    double res = sl.findMedianSortedArrays(A, B);
    cout << res << endl;

    return 0;
}