class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int end = nums.size();
        int mid = (0+end)/2;
        return nums[mid];

        
         
    }
};