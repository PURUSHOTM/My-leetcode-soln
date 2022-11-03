// class Solution
// {
//     public:
//         int findDuplicate(vector<int> &nums)
//         {
//             int ind = 0;
//             sort(nums.begin(), nums.end());
//             for (int i = 0; i < nums.size() - 1; i++)

//                 if (nums[i] == nums[i + 1]) ind = nums[i];

//             return ind;
//         }
// };

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        while (nums[0] != nums[nums[0]])
            swap(nums[0], nums[nums[0]]);
        return nums[0];
    }
};