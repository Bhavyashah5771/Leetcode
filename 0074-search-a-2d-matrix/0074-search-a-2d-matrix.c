bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int i=0,cs=0,l=0,h=0,mid=0,lr=0,mr=0,hr=matrixSize-1;;
    bool ans=false;

    while(lr<=hr){
        mr=lr+(hr-lr)/2;
        cs=matrixColSize[mr]-1;
        if(target<matrix[mr][0]){
            hr=mr-1;
        }
        else if(target>matrix[mr][cs]){
            lr=mr+1;
        }
        else{
            l=0;
            h=cs;
            while(l<=h){
                mid=l+(h-l)/2;
                if(target==matrix[mr][mid]){
                    return true;
                }
                else if(target<matrix[mr][mid]){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            break;
        }
           
        
        i++;
    }
    return ans;
}