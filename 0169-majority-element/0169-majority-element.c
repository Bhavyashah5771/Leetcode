int majorityElement(int* nums, int numsSize) {

    int count=0,candidate=0;
    
    for(int i=0;i<numsSize;i++){

        if(count==0){
            count=1;
            candidate=nums[i];
        }
        else if(candidate==nums[i]){
            count++;
        }
        else{
            count--;
        }
    }
    return candidate;
}