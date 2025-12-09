    // Problem: Return indices of two numbers whose sum equals target.
    // Approach: Use unordered_map to store seen values and check complement in O(1).
    // Time Complexity: O(n), Space Complexity: O(n).

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp; // value -> index

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (mp.find(complement) != mp.end()) {
            return { mp[complement], i };
        }

        mp[nums[i]] = i;
    }

    return {};
}
