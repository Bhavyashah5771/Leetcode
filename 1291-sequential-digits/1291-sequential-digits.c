/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include<stdlib.h>
int* sequentialDigits(int low, int high, int* returnSize) {
    int seq[36]={12,23,34,45,56,67,78,89,123,234,345,456,567,678,789,1234,2345,3456,4567,5678,6789,12345,23456,34567,45678,56789,123456,234567,345678,456789,1234567,2345678,3456789,12345678,23456789,123456789};

    int *ans=malloc(36*sizeof(int));
    int k=0;

    for(int i=0;i<36;i++){
        if(seq[i]<low){
            continue;
        }
        else if(seq[i]>high){
            break;
        }
        else{
            ans[k]=seq[i];
            k++;
        }
    }
    *returnSize=k;
    return ans;
}