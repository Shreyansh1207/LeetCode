class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
         int rows=matrix.size();
         int colmn=matrix[0].size();
        for(int i=0;i<rows;++i){
            for(int j=0;j<colmn;++j){
                if(matrix[i][j]==-1){
                    int y=0;
                    for(int k=0;k<rows;++k){
                        if(matrix[k][j]>y){
                            y=matrix[k][j];
                        }
                    }

                
                matrix[i][j]=y;
            }
                 
            }
        }   
        return matrix;
    }
};