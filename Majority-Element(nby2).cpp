class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        int n= nums.size();
        int ans=-1;
        for(auto it:mp){
            if(it.second>n/2) ans= it.first;
        }
        return ans;
    }
};
