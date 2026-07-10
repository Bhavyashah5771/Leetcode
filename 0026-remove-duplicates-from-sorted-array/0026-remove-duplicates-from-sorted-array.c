#include<stdlib.h>
int removeDuplicates(int* nums, int numsSize) {
   if(numsSize==0){
    return 0;
   }

   int i=1,k=1;

   for (i=1;i<numsSize;i++){
        if(nums[i]!=nums[k-1]){
            nums[k]=nums[i];
            k++;
        }
   }


    return k;
}