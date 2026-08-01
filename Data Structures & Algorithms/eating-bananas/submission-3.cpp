class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max=-1;
        for(int i:piles)
        {   
            if(i>max)max=i;
        }
        int left=1,right=max,minRate=max;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            long long hours=0;
            for(int i:piles)
            {
                hours+=(i+mid-1)/mid;
            }
            if(hours<=h)
            {
                minRate=mid;
                right=mid-1;
            }
            else left=mid+1;
        }
        return minRate;
    }
};

