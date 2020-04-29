public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        
        Dictionary<int, int> availableValues = new Dictionary<int, int>();

        for (var i = 0; i < nums.Length; i++) 
        {
            var valueNeeded = target - nums[i];
            if (availableValues.ContainsKey(valueNeeded)) 
            {
                return new int[] {i, availableValues[valueNeeded]};
            }
            else
            {
                availableValues[nums[i]] = value: i;
            }
        }
        
        return new int[] {};
    }
}