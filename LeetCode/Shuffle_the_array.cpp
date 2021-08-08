//https://leetcode.com/problems/shuffle-the-array/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector ans(2*n, 0);
        int i=0;
        for(int j=n; j<2*n;j++ ){
            ans[i] = nums[j-n];
            ans[i+1] =nums[j];
            i+=2;
        }
      return ans;  
    }
};
/*Input: nums = [2,5,1,3,4,7], n = 3
Output: [2,3,5,4,1,7] 
Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].*/
