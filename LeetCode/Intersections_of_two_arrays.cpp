//https://leetcode.com/problems/intersection-of-two-arrays/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();//, m= nums.size();
        vector<int> result;
        unordered_map<int, int> hash;
        
        //int small = n>m?m:n;
        for(int i :nums1) hash[i]++;
        for(int i:nums2){
            if(hash.count(i)){
                result.push_back(i);
                hash.erase(i);
            }
        }
        return result;
    }
};
/*Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]*/
