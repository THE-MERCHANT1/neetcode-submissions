class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       for(int i=0;i<matrix.size();i++)
       {    int left =0,right=matrix[i].size()-1;
            if(matrix[i][right]==target){return true;}
            else if(target>matrix[i][right])
            {
                continue;
            }
            else
            {
                 while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(matrix[i][mid]==target)
            {
                return  true;
            }
            if(matrix[i][mid]<target)
            {
                left=mid+1;
            }
            else right=mid-1;
        }
            }
            
            
       }
       return false;
    }
};
