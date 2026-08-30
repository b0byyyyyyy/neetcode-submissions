class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
    int left =0;
    int right = n-1;


    while(left<right){
        if(nums[left] == nums[left+1]){
            return nums[left];
        }
        if (nums[right] == nums[right - 1]) {
                return nums[right];
            }

        
            left++;
            right--;
        }

        
    
    return nums[left];
        
    }
};
