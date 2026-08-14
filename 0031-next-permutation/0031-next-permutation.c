void nextPermutation(int* nums, int numsSize) {
    
    int i=0,j=0,k=0,temp=0,l=0,r=0;
    bool found=false;
    for(i=numsSize-2;i>=0;i--){
        if(nums[i+1]>nums[i]){
            for(j=numsSize-1;j>=0;j--){
                if(nums[j]>nums[i]){
                    break;
                }
            }
            temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            l=i+1;
            r=numsSize-1;
            while(l<r){
                temp=nums[l];
                nums[l]=nums[r];
                nums[r]=temp;
                l++;
                r--;
            }
            found=true;
            break;
        }
    }
    if(found==false){
        l=0;
        r=numsSize-1;
        while(l<r){
            temp=nums[l];
            nums[l]=nums[r];
            nums[r]=temp;
            l++;
            r--;
        }

    }
}