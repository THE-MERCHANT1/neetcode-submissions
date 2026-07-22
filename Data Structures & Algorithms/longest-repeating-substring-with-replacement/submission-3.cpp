class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0,max=0,maxfreq=0;
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++)
        {   int windowsize=i-left+1;
            char c=s[i];
             m[c]++;
            if(m[c]>maxfreq){maxfreq=m[c];}
            if(windowsize-maxfreq<=k)
            {
                if(max<windowsize)max=windowsize;
                

            }
            else{ m[s[left]]--;left++;}           

        }
        return max;
    }
};
