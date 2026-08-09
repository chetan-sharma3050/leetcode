class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int n = nums.size();
        sort(nums.begin(), nums.end());

        int left, right, sum = 0;
        int min_diff = INT_MAX;
        int res_sum = 0;

        for (int i = 0; i < n - 2; i++) {

            left = i + 1;
            right = n - 1;

            while (left < right) {

                sum = nums[i] + nums[left] + nums[right];

                int diff = abs(sum - target);

                if (diff < min_diff) {
                    min_diff = diff;
                    res_sum = sum;
                }

                if (sum == target) {
                    return sum;
                }
                else if (sum > target) {
                    right--;
                }
                else {
                    left++;
                }
            }
        }

        return res_sum;
    }
};