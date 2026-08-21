#include<limits.h>
int thirdMax(int* nums, int numsSize) {
    int i=0;
    long long m1=nums[0],m2=LLONG_MIN,m3=LLONG_MIN;

    for(i=1;i<numsSize;i++){
        if(nums[i]>m1){
            m3=m2;
            m2=m1;
            m1=nums[i];
        }
        else if(m1!=nums[i] && nums[i]>m2){
            m3=m2;
            m2=nums[i];
        }
        else if(m1!=nums[i] && m2!=nums[i] && nums[i]>m3){
            m3=nums[i];
        }
    }
    if(m3==LLONG_MIN){
        return m1;
    }
    return m3;
}