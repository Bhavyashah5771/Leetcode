/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
#include<stdlib.h>

int comp(void const *a,void const *b){
    int *x=*(int**)a;
    int *y=*(int**)b;

    if(x[0]<y[0]) return -1;
    if(x[0]>y[0]) return 1;
    return 0;
}

int** merge(int** intervals, int intervalsSize, int* intervalsColSize, int* returnSize, int** returnColumnSizes) {

    int** ans=malloc(intervalsSize*sizeof(int *));

    *returnColumnSizes=malloc(intervalsSize*sizeof(int));

    int i=0,j=0;

    qsort(intervals,intervalsSize,sizeof(int *),comp);

    int st=intervals[0][0],en=intervals[0][1];
    
    for(i=1;i<intervalsSize;i++){
        if(en>=intervals[i][0]){
            en=en>intervals[i][1]?en:intervals[i][1];
        }
        else{
            ans[j]=malloc(2*sizeof(int));
            ans[j][0]=st;
            ans[j][1]=en;
            (*returnColumnSizes)[j]=2;
            j++;
            st=intervals[i][0];
            en=intervals[i][1];
        }
    }

    ans[j]=malloc(2*sizeof(int));
    ans[j][0]=st;
    ans[j][1]=en;
    (*returnColumnSizes)[j]=2;
    j++;

    *returnSize=j;

    return ans;
}