int maxArea(int* height, int heightSize) {
    int i=0,j=heightSize-1,maxsum=0,distance=heightSize-1;


    while(i<j){
        distance=j-i;
        if(height[i]>height[j]){
            if(distance*height[j]>maxsum){
                maxsum=distance*height[j];
            }
            j--;
        }
        else{
             if(distance*height[i]>maxsum){
                maxsum=distance*height[i];
            }
            i++;
        }
       
        
    }
    
    return maxsum;
}