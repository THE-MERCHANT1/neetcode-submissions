class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0,right=numbers.size()-1;
        bool found=false;
        while(numbers[left]+numbers[right]!=target)
        {
            if(numbers[left]+numbers[right]>target&&right!=left)
            {
                --right;
            }
            else ++left;
        }
        vector<int> v={left+1,right+1};
        return v;
   }
};