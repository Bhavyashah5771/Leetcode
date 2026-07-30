int firstMissingPositive(int* nums, int numsSize) {
    int i=0,temp1=0,temp2=0;

    for(i=0;i<numsSize;i++){

        while(nums[i]!=i+1){
            if(nums[i]<=0){
                break;
            }
            else{
                if(nums[i]<=numsSize){
                    temp1=nums[i];
                    if(nums[temp1-1]==temp1){
                        break;
                    }
                    else{
                    temp1=nums[i];
                    nums[i]=nums[temp1-1];
                    nums[temp1-1]=temp1;
                    }
                }
                else{
                    break;
                }
            }
        }
    }

      for(i=0;i<numsSize;i++){
        if(nums[i] != i+1)
            return i+1;
        }
        return numsSize+1;
}