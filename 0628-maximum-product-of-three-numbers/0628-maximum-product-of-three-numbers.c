#include<stdlib.h>
int comp(const void *a,const void *b){
    int x=*(const int*)a;
    int y=*(const int*)b;
    if(x<y) return -1;
    if(x>y) return 1;
    return 0;
}
int maximumProduct(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),comp);
    return nums[numsSize-3]*nums[numsSize-2]*nums[numsSize-1]>nums[0]*nums[1]*nums[numsSize-1]?nums[numsSize-3]*nums[numsSize-2]*nums[numsSize-1]:nums[0]*nums[1]*nums[numsSize-1];
}