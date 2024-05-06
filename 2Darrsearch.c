bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) 
{
    for(int i=1;i<=matrixSize-1;i++)
    {
        for(int j=1;j<=matrixColSize-1;j++)
        {
            if(matrix[i][j]==target)
            {
                return true;
            }
            
        }
    }
    return false;
}
