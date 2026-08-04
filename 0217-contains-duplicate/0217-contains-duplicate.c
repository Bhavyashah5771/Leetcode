int comp(const void *a,const void *b){
    int x=*(const int*)a;
    int y=*(const int*)b;

    if(x<y) return -1;
    if(x>y) return 1;
    return 0;
}
bool containsDuplicate(int* nums, int numsSize) {

    qsort(nums,numsSize,sizeof(int),comp);

    bool ans=false;

    for(int i=0;i<numsSize;i++){
        if(i+1<numsSize && nums[i]==nums[i+1]){
            ans=true;
            break;
        }
    }
    return ans;
}