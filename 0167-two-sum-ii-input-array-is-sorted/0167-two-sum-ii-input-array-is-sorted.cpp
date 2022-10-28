// class Solution
// {
//     public:
//         vector<int> twoSum(vector<int> &numbers, int target)
//         {
//             for (int i = 0; i < numbers.size(); i++)
//             {
//                 for (int j = 1; j < numbers.size(); j++)
//                 {
//                     if (numbers[i] + numbers[j] == target)
//                     {
//                         return {i+1,j+1};

//                     }
//                 }

//             }
//             return {};
//         }
// };

class Solution
{
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
            int i = 0, j = nums.size() - 1;
            while (i < j)
            {
                int sum = nums[i] + nums[j];
                if (sum == target) 
                    return { i + 1,j + 1};
                else if (sum > target) j--;
                else i++;
            }
            return {};	// not found
        }
};