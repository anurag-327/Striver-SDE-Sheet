bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int t=0,l=0,r=matrix[0].size()-1,b=matrix.size()-1;
        vector<int> ans;
        while(t<=b && l<=r)
        {
            for(int i=l;i<=r;i++)
            {
                if(matrix[t][i]==target)
                return true;
           
            }
            t++;
            for(int i=t;i<=b;i++)
            {
                if(matrix[i][r]==target)
                return true;
           
            }
            r--;
            if(t<=b)
            {
               for(int i=r;i>=l;i--)
               {
                   if(matrix[b][i]==target)
                return true;
               
               }  
               b--;
            }
            if(l<=r)
            {
                for(int i=b;i>=t;i--)
                {
                    if(matrix[i][l]==target)
                return true;
                
                }
                l++;  
            }
        }
        return false;   
        
}