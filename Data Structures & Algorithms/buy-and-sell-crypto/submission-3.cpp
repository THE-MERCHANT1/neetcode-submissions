class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=101,max=-1,maxsum=0;
        for(int i=0;i<prices.size();i++)
        {   if(i!=0){if(maxsum<max-min)maxsum=max-min;}
            if(prices[i]<min&&i!=prices.size()-1){min=prices[i];max=-1;}
            if(prices[i]>max){max=prices[i];}
           
        }
        if(max-min>maxsum){maxsum=max-min;}
      return maxsum;
    }
};
