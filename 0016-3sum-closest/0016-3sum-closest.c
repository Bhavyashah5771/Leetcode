#include<stdlib.h>
int comp(const void* a,const void* b ){
    int x=*(const int*)a;
    int y=*(const int*)b;
    if(x<y) return -1;
    if(x>y) return 1;
    return 0;
}

int threeSumClosest(int* nums, int numsSize, int target) {

    qsort(nums,numsSize,sizeof(int),comp);

    int i=0,l=1,r=numsSize-1,sum=0,ans=1000,ans1=100000;

    for(i=0;i<numsSize;i++){
        l=i+1;
        r=numsSize-1;
        while(l<r){
        sum=nums[i]+nums[l]+nums[r];
        
        if(sum<target){
            if(target-sum<ans1){
                ans=sum;
                ans1=target-sum;
            }
        }
        else{
            if(sum-target<ans1){
                ans=sum;
                ans1=sum-target;
            }
        }

        if(sum==target){
            return sum;
        }
        else if(sum>target){
            r--;
        }
        else{
            l++;
        }
        }
    }
    return ans;
}