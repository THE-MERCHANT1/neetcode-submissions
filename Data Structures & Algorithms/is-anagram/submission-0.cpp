class Solution {
public:
    bool isAnagram(string s, string t) {
      std::unordered_map<char,int> x;

        if(s.size()!=t.size())
        {
            return false;
        }

        for(char c:s)
        {
            x[c]++;
        }

        for(char c:t)
        {
            x[c]--;
            if(x[c]<0)
            {
                return false;
            }
        }
        return true;  
    }
};
