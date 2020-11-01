class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        int r=matrix.size();
        
        if(r==0)
            return 0;
        
        int c=matrix[0].size(),ans=0;
        
        int mat[r+1][c+1];
        
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                mat[i][j]=int(matrix[i][j]-48);
        
        
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
            {
                
                
                if(mat[i][j] and (i and j))
                    mat[i][j]=1+min({mat[i-1][j-1],mat[i][j-1],mat[i-1][j]});
                
                
                ans=max(ans,mat[i][j]);
                
            }
        return ans*ans;
    }
};