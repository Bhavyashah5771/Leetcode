/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include<stdlib.h>
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int *ans=malloc(2*numsSize*sizeof(int));
    int i=0,n=numsSize;
    for(i=0;i<numsSize;i++){
        ans[i]=nums[i];
        ans[i+n]=nums[i];
    }
    *returnSize=2*numsSize;
    return ans;
}