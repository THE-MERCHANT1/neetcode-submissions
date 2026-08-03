class Solution {
public:
    int findMin(vector<int> &nums) {
        int min =1001,left=0,right=nums.size()-1;
        while (left<=right)
        {
           int mid=left+(right-left)/2;
       
           if(nums[left]<=nums[mid]){
            if(nums[right]>=nums[mid]){return nums[left];}

            else  left=mid+1;
        }
           else{right=mid;}
        }
        return min;
    }
};