#include<stdlib.h>
int gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int compare(const void *a,const void *b){
    int x=*(const int *)a;
    int y=*(const int*)b;

    if(x<y) return -1;
    if(x>y) return 1;
    return 0;
}

long long gcdSum(int* nums, int numsSize) {
    int *mx=malloc(numsSize*sizeof(int));
    mx[0]=nums[0];
    int *prefixGcd=malloc(numsSize*sizeof(int));
    prefixGcd[0]=gcd(nums[0],mx[0]);
    int max=nums[0];
    long long ans=0;

    for(int i=1;i<numsSize;i++){
        if(nums[i]>max){
            mx[i]=nums[i];
            max=nums[i];
        }
        else{
            mx[i]=max;
        }
        prefixGcd[i]=gcd(nums[i],mx[i]);
    }
    int l=0,r=numsSize-1;

    qsort(prefixGcd,numsSize,sizeof(int),compare);

   while(r>l){
            ans=ans+gcd(prefixGcd[l],prefixGcd[r]);
            l++;
            r--;
        }
    free(mx);
    free(prefixGcd);

    return ans;
}