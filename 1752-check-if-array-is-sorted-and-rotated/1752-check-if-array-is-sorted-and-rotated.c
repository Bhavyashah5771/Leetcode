bool check(int* nums, int numsSize) {
    int i=0,td=0;
    for(i=0;i<numsSize;i++){
        if(i==0){
            if(nums[numsSize-1]>nums[0]){
                td++;
            }
            continue;
        }

        if(nums[i]<nums[i-1]){
            td++;
        }
    }

    if(td>1){
        return false;
    }

    return true;
}