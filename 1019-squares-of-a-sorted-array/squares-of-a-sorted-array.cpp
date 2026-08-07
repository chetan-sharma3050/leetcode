class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n);

        int i = 0;
        int j = n - 1;
        int k = n - 1;

        while (i <= j) {
            int A = nums[i] * nums[i];
            int B = nums[j] * nums[j];

            if (A > B) {
                arr[k] = A;
                i++;
            }
            else {
                arr[k] = B;
                j--;
            }

            k--;
        }

        return arr;
    }
};