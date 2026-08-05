class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int n=nums.size();
       for(int i=0,j=1;j<n;j++){
        if(nums[i]==0 and nums[j]!=0){
            swap(nums[i],nums[j]);
            i++;
        }
        if(nums[i]!=0){
            i++;
        }
       }
        
    }
};