/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include<stdlib.h>
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int *ans=malloc(2*sizeof(int));
    bool fa=true;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==target){
            if(fa==true){
            ans[0]=i;
            fa=false;
            }
            ans[1]=i;
        }
    }
    if(fa==true){
        ans[0]=-1;
        ans[1]=-1;
    }
    *returnSize=2;
   return ans;
}