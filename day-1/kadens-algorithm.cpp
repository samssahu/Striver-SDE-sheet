class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int currentSum=nums[0];
        int maxSum=nums[0];
        for(int i=1 ;i<n ;i++){
            currentSum=max(nums[i],currentSum+nums[i]);
            maxSum=max(maxSum,currentSum);
        }
        return maxSum;
    }
};



/*
// Find max contiguous subarray

int maxSubArray(vector<int> &nums)
{
    int max = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        max_ending_here += nums[i];
        if (max < max_ending_here)
            max= max_ending_here;
        if (max_ending_here < 0)
            max_ending_here = 0; // to get only +ve ans
    }
    return max;
}
/*