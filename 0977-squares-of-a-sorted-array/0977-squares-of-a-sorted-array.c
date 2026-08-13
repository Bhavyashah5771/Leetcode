/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int comp(const void *a,const void *b){
    int x=*(const int *)a;
    int y=*(const int *)b;

    if(x<y) return -1;
    if(x>y) return 1;
    return 0;
}

int* sortedSquares(int* nums, int numsSize, int* returnSize) {

    for(int i=0;i<numsSize;i++){
        nums[i]=nums[i]*nums[i];
    }

    qsort(nums,numsSize,sizeof(int),comp);

    *returnSize=numsSize;

    return nums;
}