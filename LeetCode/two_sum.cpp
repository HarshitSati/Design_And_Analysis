class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector <pair<int, int>> vrr;
        for(int i=0; i< n;i++) vrr.push_back({nums[i], i});
        //vrr = nums;
        sort(vrr.begin(), vrr.end());
        int L =0, R= n-1;
        while(L<R){
            int sum = vrr[L].first +vrr[R].first;
            if(target == sum) return {vrr[L].second, vrr[R].second};
            else if(target < sum) R--;
            else L++;
        }
        //return ans;
        //cout<<left<<" "<<right;
        //for(int i: ans) cout<<i<<" ";
        return {-1,-1};
    }
};
