class Solution
{
    public:
        int search(vector<int> &nums, int target)
        {
            int st = 0;
            int lst = nums.size() - 1;
            int mid = (st + lst) / 2;
            while (st <= lst)
            {
                if (target == nums[mid]) 
                    return mid;
                
                else if (target < nums[mid])
                {
                    lst = mid - 1;
                }
                else if (target > nums[mid])
                {
                    st = mid + 1;
                }
                mid = (st + lst) / 2;
            }
            return -1;
        }
};