int findKthElement(std::vector<std::vector<int>>& matrix, int k) {
    int rows=matrix.size();
    int columns=matrix[0].size();
    //4 pointers
    int top=0;
    int bottom=rows-1;
    int left=0;
    int right=columns-1;
    int direction=0;
    vector<int>elements;

    while( top<=bottom && left<=right){
        if(direction==0){
            for(int i=left;i<=right;i++){
                elements.push_back(matrix[top][i]);
            }
            top++;
        }
        else if(direction==1){
            for(int i=top;i<=bottom;i++){
                elements.push_back(matrix[i][right]);
            }
            right--;
        }
        else if(direction==2){
            for(int i=right;i>=left;i--){
                elements.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        else if(direction==3){
          for (int i = bottom; i >= top; i--) {
            elements.push_back(matrix[i][left]);
          }
          left++;
        }
        direction++;
        direction %= 4;
    }
    return elements[k - 1];
}
