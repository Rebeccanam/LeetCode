class Solution {
    public int[] twoSum(int[] nums, int target) {
        int targetNum = 0;
        int[] result = new int[2];
        int size = nums.length;
        for (int i = 0; i < size; i++) {
            targetNum = target - nums[i];
            for (int j = 1; j < size; j++) {
                if (nums[j] == targetNum && i != j) {
                    result[0] = i;
                    result[1] = j;
                }
                
            }
        }
    return result;
    }
}