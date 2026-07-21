class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
       unordered_map<char,int> m;
       int left=0,max=0;
       if(s.size()==1){return 1;}
      for(int i=0;i<s.size();i++)
      {
        char c=s[i];
      
        
        if(m.find(c)!=m.end())
        {
            if(m[c]>=left&&m[c]<=i)
            {
                left=m[c]+1;

            }
        }
        m[c]=i;
       if(max<i-left+1) {max=i-left+1;}
      }

         return max;
    }
};