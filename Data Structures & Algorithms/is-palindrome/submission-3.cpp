class Solution{
    public:
bool isPalindrome(string s) 
{
    int left=0,right=s.size()-1;
          
    while(left<right)
    {
         while(left<right&&!isalnum(s[left]))
         {
            ++left;
         }
         
         while(left<right&&!isalnum(s[right]))
         {
            --right;
         }
        if(tolower(s[left])!=tolower(s[right]))
        {
            return 0;
        }
        --right;
        ++left;
    }



    return true;
}
};