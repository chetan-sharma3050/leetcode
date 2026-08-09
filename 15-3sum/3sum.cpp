class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
      int left,right,sum=0,s;


      for(int i=0;i<n-2;i++){
        if(i>0 and nums[i]==nums[i-1]){
            continue;
        }
        left=i+1;
        right=n-1;
        s=-1*nums[i];
        while(left<right){
            sum=nums[left]+nums[right];
            if(sum==s){
                ans.push_back({nums[i],nums[left],nums[right]});
                left++;
                right--;
                while(left<n and nums[left]==nums[left-1]){
                    left++;
                }
                while(right>=0 and nums[right]==nums[right+1]){
                    right--;
                }

            }
            else if(sum>s){
                right--;

            }
            else{
                left++;
            }
        }
        
      }
      return ans;

      
        
    }
};