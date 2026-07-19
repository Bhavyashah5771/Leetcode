 #include<stdlib.h>
 int comp(const void* a,const void* b){
    int x=*(const int*)a;
    int y=*(const int*)b;

    if(x<y) return -1;
    if(x>y) return 1;
    return 0;
 }

int** fourSum(int* nums, int numsSize, int target, int* returnSize, int** returnColumnSizes) {
    

    int left=0,right=0,c=0;
    long long sum=0;
    int **ans=malloc(numsSize*numsSize*sizeof(int *));
    *returnColumnSizes=malloc(numsSize*numsSize*sizeof(int));

    qsort(nums,numsSize,sizeof(int),comp);

    for(int i=0;i<numsSize-3;i++){
         if(i>0){
            if(nums[i]==nums[i-1]){
                continue;
            }
        }
        for(int j=i+1;j<numsSize-2;j++){

        if(j>i+1){
            if(nums[j]==nums[j-1]){
                continue;
            }
        }
            left=j+1;
            right=numsSize-1;
            sum=(long long)nums[i]+nums[j]+nums[left]+nums[right];
            while(left<right){
                if(sum>target){
                    right--;
                }
                else if(sum<target){
                    left++;
                }
                sum=(long long)nums[i]+nums[j]+nums[left]+nums[right];

                if(sum==target && i!=j && j!=left && left!=right && i!=right && i!=left && j!=right){
                ans[c]=malloc(4*sizeof(int));
                ans[c][0]=nums[i];
                ans[c][1]=nums[j];
                ans[c][2]=nums[left];
                ans[c][3]=nums[right];
                (*returnColumnSizes)[c]=4;
                c++;
                left++;
                right--;

                while(nums[left]==nums[left-1] && left<right){
                    left++;
                }

                while(right<=numsSize-2 && nums[right]==nums[right+1] && left<right){
                    right--;
                }

            }

            }
        }
    }
    *returnSize=c;
    return ans;
}