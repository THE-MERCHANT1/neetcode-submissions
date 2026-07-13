class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> v;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++)
        {   if (i > 0 && nums[i] == nums[i-1]) continue;
            int left = 1 + i, right = nums.size() - 1;
            while (left < right)
            {
                if (nums[i] + nums[left] + nums[right] == 0)
                {
                    v.insert(v.end(), {nums[i], nums[left], nums[right]});
                
                while(left<right&&nums[left]==nums[left+1]){left++;}
                while(left<right&&nums[right]==nums[left-1]){--right;}
                    ++left;
                --right;
                }
                else if(nums[i] + nums[left] + nums[right] > 0){--right;}
                else{++left;}
                

            }
        }

        return v;
    }
};