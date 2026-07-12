int removeElement(int* nums, int numsSize, int val) {
    int i=0,k=numsSize,rt=0;

    for(i=0;i<k;nums[i]!=val?i++:i){
        if(nums[i]==val){
            k--;
            rt=i;
            while(rt<k){
                nums[rt]=nums[rt+1];
                rt++;
            }
        }
    }

    return k;
}