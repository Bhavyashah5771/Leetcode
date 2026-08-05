/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdlib.h>
int comp(const void *a,const void *b){
    int x=*(const int*)a;
    int y=*(const int*)b;

    if(x<y) return -1;
    if(x>y) return 1;
    return 0;
}

int* findMissingElements(int* nums, int numsSize, int* returnSize) {

    if(numsSize==0 || numsSize==1){
        return nums;
    }

    qsort(nums,numsSize,sizeof(int),comp);

    int *ans=malloc((nums[numsSize-1]-nums[0])*sizeof(int));

    int temp=nums[0];

    *returnSize=0;

    for(int i=1;i<numsSize;i++){
        temp++;
        while(temp!=nums[i]){
            ans[(*returnSize)++]=temp;
            temp++;
        }
    }

    return ans;
}