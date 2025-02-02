class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        int diff = 10000000;
        for(int i = 0; i < n; i++){
            int count = 0;
            for(int j = 0; j < n; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
            if(diff > count){
                diff = count;
                res = nums[i];
            }
        }
        return res;
    }
};
