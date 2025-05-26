int maxSubArray(int* nums, int numsSize) {
    int max_sum = nums[0];
    int current_sum = nums[0];
    
    for (int i = 1; i < numsSize; i++) {
        // Either start a new subarray or extend the current subarray
        current_sum = (nums[i] > current_sum + nums[i]) ? nums[i] : current_sum + nums[i];
        // Update max_sum if current_sum is greater
        max_sum = (current_sum > max_sum) ? current_sum : max_sum;
    }
    
    return max_sum;
}
