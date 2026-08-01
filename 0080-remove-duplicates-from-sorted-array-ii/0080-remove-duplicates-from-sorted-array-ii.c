int removeDuplicates(int* nums, int numsSize) {
    int i=0,k=2;

    if(numsSize==0){
        return 0;
    }
    else if(numsSize==1){
        return 1;
    }

    for(i=0;i<numsSize;i++){
        if(nums[k-2]!=nums[i]){
            if(k<numsSize && k<=i){
            nums[k++]=nums[i];
            }
        }
        
    }

    return k;
}