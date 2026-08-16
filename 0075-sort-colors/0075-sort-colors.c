void sortColors(int* nums, int numsSize) {
    int i=0,c0=0,c1=0,c2=0;

    for(i=0;i<numsSize;i++){
        if(nums[i]==0){
            c0++;
        }
        else if(nums[i]==1){
            c1++;
        }
        else{
            c2++;
        }
    }

    for(i=0;i<numsSize;i++){
        if(c0>0){
            nums[i]=0;
            c0--;
        }
        else if(c1>0){
            nums[i]=1;
            c1--;
        }
        else{
            nums[i]=2;
            c2--;
        }
    }
}