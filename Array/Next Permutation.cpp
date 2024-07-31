class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         int n = nums.size(), index = -1;
        for(int i=n-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                index = i;
                break;
            }
        }
        if(index==-1){reverse(nums.begin(),nums.end());return;}
       reverse(nums.begin()+index+1,nums.end());
       for(int i=index+1;i<n;i++){
         if(nums[index]<nums[i]){
            swap(nums[i],nums[index]);
            break;
         }
        
       }
    }
};
